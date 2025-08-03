#include <iostream>


extern double weighted_mean(int marks[], int weights[], int n);

int main() {
    
    int marks[] = {80, 90, 70};
    
    int weights[] = {3, 4, 2};
    
    int n = 3;

    double result = weighted_mean(marks, weights, n);

    std::cout << "Weighted mean = " << result << std::endl;

    return 0;
}
