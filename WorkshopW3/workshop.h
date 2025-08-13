#include <iostream>

void changeValue(double* p) {
    *p = 42.0;
}

void printArray(double* p, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << p[i] << "\n";
    }
}

double arrayMax(double* p, int n) {
    double MAX = p[0];
    for (int i = 1; i < n; ++i) {
        if (p[i] > MAX) MAX = p[i];
    }
    return MAX;
}

double* dynamicArray(int n, double M) {
    double* a = new double[n];
    for (int i = 0; i < n; ++i) a[i] = M;
    return a;
}
             




