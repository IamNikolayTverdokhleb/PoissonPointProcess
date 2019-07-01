//
// Created by Коля on 2019-06-30.
//

#include "Process.h"
#include <vector>
#include <iostream>
#include <random>
#include <fstream>
int Process::yesOrNo(double probability){
    static double sum = 0;
    sum += probability;
    std::random_device rd;
    std::mt19937 mersenne(rd());
    std::uniform_real_distribution<> urd(0, 1);
    auto a = urd(mersenne);
    return a <= probability ? 1 : 0;
}

void Process::runProcess() {
        std::vector <int> distribution;
        int k = 0;
        int i = 0;
        double t0 = t;
        double deltaT = tau;
            do{
                if (yesOrNo(probabilityPoisson(k, t0)) != 0){
                        k+=1;
                        deltaT = tau;
                    }
                else{
                    k+=0;
                    deltaT+=tau;
                }
                distribution.push_back(k);
                std::cout << std::endl;
                std::cout << " t = " << t0 << "    f(t) = " << distribution[i] << std::endl;
                std::cout << " Время без успеха: " << deltaT << " секунд" << std::endl;
                std::cout << std::endl;
                i++;
                t0+=tau;
              } while(t0 < T);
            fileOutPut(distribution);
}

void Process::fileOutPut(std::vector<int> distribution){
    std::ofstream LayerOutput("../Results/Distibution.txt");
            for (int i = 0; i*tau < T; i++) {
                LayerOutput << i * tau << "\t\t" << distribution[i] << std::endl;
            }

}