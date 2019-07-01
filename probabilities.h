//
// Created by Коля on 2019-06-30.
//

#ifndef STOCHASTICPROCESSESLIB_PROBABILITIES_H
#define STOCHASTICPROCESSESLIB_PROBABILITIES_H


#include "Process.h"

class probabilities: public Process {
public:

    probabilities() : Process() {};
    probabilities(ParametrsStruct parametrsStruct): Process(parametrsStruct) {};

    double probabilityPoisson(int k, double deltaT);
};


#endif //STOCHASTICPROCESSESLIB_PROBABILITIES_H
