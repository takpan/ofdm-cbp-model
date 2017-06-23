#include "stochastic.h"
#include <math.h>

Stochastic::Stochastic()
{

}

int factorial(int x)
{
    if (x > 0)
        return (x == 1 ? x : x * factorial(x - 1));
}

//double Stochastic::poissonDist(double poissPar, int i)
//{
//    return pow(poissPar, i) * exp(-poissPar) / factorial(i);
//}


double Stochastic::poissonDist(double l, int k){
    double prob;
    unsigned int c;

    prob =1;
    c = ((k <= l) ? k : l);

    for (unsigned int i = 1; i <= c; i++)
        prob *= (1/exp (1))*(l/i);

    if (c == k){
        prob *= (1/exp(l-c));
    } else {
        for (unsigned int i = 1; i <= k-l; i++){
            prob *= (l/(c+i));
        }
        prob *= (1/exp(l-c));
    }

    return prob;
}
