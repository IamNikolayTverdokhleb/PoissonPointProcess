#include <iostream>
#include "Process.h"
#include "probabilities.h"
#include <random>
using namespace std;

int main() {
    double lambda = 1.9; /*Choose parameter lambda */
    double tau = 0.001;
    int t = 0.0; /*Choose start time */
    int T = 15.0; /*Choose ending time */
    struct ParametrsStruct parametrsStruct = {lambda, tau, t, T};
        
    probabilities prob(parametrsStruct);
    prob.runProcess();
    system("../Results/Distribution");
    system("open ../Results/Distibution.png");
}