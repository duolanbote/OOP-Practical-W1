#include <iostream>

extern int mean(int array[], int n);

int main() {
    int test_array[4] = {10, 50, 30, 40};
    double result = mean(test_array, 4);

    std::cout << "Average = " << result << std::endl;
    return 0;
}