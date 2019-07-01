 # Simulation of Poisson process ~ Pois($$\lambda$$*t).

You can use this program to simulate Poisson Process ~ Pois($$\lambda$$*t). In main.cpp you can choose parameter lambda, starting and ending time of the process. 
### For example, if you want to simulate Pois(1.9*t), 0<t<15, simply do this:

```c++
int main() {
    double lambda = 1.9; /*Choose parameter lambda */
    double tau = 0.001;
    int t = 0.0; /*Choose start time */
    int T = 15.0; /*Choose ending time */
    struct ParametrsStruct parametrsStruct = {lambda, tau, t, T};

    probabilities prob(parametrsStruct);
    prob.runProcess();
}

```
The result of the program will be a text file, which you can use to visualise process. It’s Distribution.txt file, 
where the first column corresponds to the time, and the second to the process value. 

