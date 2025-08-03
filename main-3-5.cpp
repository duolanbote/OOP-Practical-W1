#include <iostream>

extern double sum_even(double array[], int n);

int main() {
    double data[] = {2.0, 3.5, 4.0, 5.5, 6.0}; 
    int n = 5;

    double result = sum_even(data, n);

    std::cout << "Sum of even= " << result << std::endl;

    return 0;
}
