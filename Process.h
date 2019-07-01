//
// Created by Коля on 2019-06-30.
//

#ifndef STOCHASTICPROCESSESLIB_PROCESS_H
#define STOCHASTICPROCESSESLIB_PROCESS_H

#include <vector>
struct ParametrsStruct{
    double lambda, tau;
    int t, T; /*Параметр распределения, начальное время, конечное время*/
};
class Process {
public:
    Process() {}; /*базовый конструктор*/
    Process(ParametrsStruct parametrsStruct){
        this->lambda = parametrsStruct.lambda;
        this->t = parametrsStruct.t;
        this->T = parametrsStruct.T;
        this->tau=parametrsStruct.tau;
    }
    ~Process(){};

    virtual double probabilityPoisson(int k, double deltaT) = 0;
    int yesOrNo(double probability);
    void fileOutPut(std::vector<int> distribution);
    void runProcess();

protected:
    double lambda, tau;
    int t, T;
};


#endif //STOCHASTICPROCESSESLIB_PROCESS_H
