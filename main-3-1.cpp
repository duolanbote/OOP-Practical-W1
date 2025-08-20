#include <iostream>

int* readNumbers();
bool equalsArray(int* numbers1, int* numbers2, int length);

int main() {
    int* arr1 = readNumbers();
    int* arr2 = readNumbers();

    if (equalsArray(arr1, arr2, 10)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}
