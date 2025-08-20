#include <iostream>

int* readNumbers();
int secondSmallestSum(int* numbers, int length);

int main() {
    int* arr = readNumbers();
    int result = secondSmallestSum(arr, 10);
    std::cout << result << std::endl;
    return 0;
}
