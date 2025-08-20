#include <iostream>

int* readNumbers();
int* reverseArray(int* numbers1, int length);

int* readNumbers() {
    int* arr = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }
    return arr;
}

int* reverseArray(int* numbers1, int length) {
    int* arr = new int[length];
    for (int i = 0; i < length; i++) {
        arr[i] = numbers1[length - 1 - i];
    }
    return arr;
}
