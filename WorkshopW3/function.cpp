#include "workshop.h"
#include <iostream>

void changeValue(double *p){

    *p = 42;

}


void printArray(double *p, int n){

    for (int i = 0; i < n; ++i) {
        std::cout << p[i] <<std::endl;     
    }

}


double arrayMax(double *p, int n){

    double MAX = p[0];   

    for (int i = 1; i < n; ++i) {  
        if (p[i] > MAX) {        
            MAX = p[i];
        }
    }
    return MAX;   

}

double* dynamicArray(int n, double M) {
    double* p = new double[n]; 
    for (int i = 0; i < n; i++) {
        p[i] = M; 
    }
    return p; 
}
