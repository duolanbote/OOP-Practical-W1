#include <iostream>

extern int min_element(int array[], int n);

int main() {
    int data[6] = {5, 7, 8, 1, 7, 9};
    int result = min_element(data, 6);
    std::cout << "Minimum value = " << result << std::endl;
    