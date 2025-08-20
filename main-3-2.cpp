#include <iostream>

int* readNumbers();
int* reverseArray(int* numbers1, int length);
bool equalsArray(int* numbers1, int* numbers2, int length);

bool equalsArray(int* numbers1, int* numbers2, int length) {
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int* arr1 = readNumbers();
    int* arr2 = reverseArray(arr1, 10);

    if (equalsArray(arr1, arr2, 10)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
