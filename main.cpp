#include <iostream>
#include "Process.h"
#include "probabilities.h"
#include <random>
using namespace std;

int main() {
    double lambda = 1.9; /*Выберите параметр распределения */
    double tau = 0.001;
    int t = 0.0; /*Выберите начальное время */
    int T = 15.0; /*Выберите конечное время */
    struct ParametrsStruct parametrsStruct = {lambda, tau, t, T};

    probabilities prob(parametrsStruct);
    prob.runProcess();
    system("../Results/Distribution");
    system("open ../Results/Distibution.png");
}