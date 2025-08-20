#include <iostream>

int* readNumbers(); //assign arr and receive number which input by user
void printNumbers(int* numbers, int length);// output number and arr

int* readNumbers() {
    static int arr[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];//cin: user input numebr, and assign arr to each number
    }
    return arr;
}

void printNumbers(int* numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}
