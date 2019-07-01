//
// Created by Коля on 2019-06-30.
//
#include <iostream>
#include "probabilities.h"
#include <math.h>

double probabilities::probabilityPoisson(int k, double deltaT) {
    double temp1 = 1.0, temp2 = 1.0, p;
    for (int i = 1; i <= k; i++){
        temp1 *= lambda*deltaT;
        temp2 *= i;
    }
    p = temp1*exp(-lambda*deltaT)/temp2;

    return p;
}


