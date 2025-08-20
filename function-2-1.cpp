#include <iostream>

int* readNumbers();
void hexDigits(int* numbers, int length);

int* readNumbers() {
    int* arr = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }
    return arr;
}

void hexDigits(int* numbers, int length) {
    for (int i = 0; i < length; i++) {
        char hex;
        if (numbers[i] == 0) hex = '0';
        else if (numbers[i] == 1) hex = '1';
        else if (numbers[i] == 2) hex = '2';
        else if (numbers[i] == 3) hex = '3';
        else if (numbers[i] == 4) hex = '4';
        else if (numbers[i] == 5) hex = '5';
        else if (numbers[i] == 6) hex = '6';
        else if (numbers[i] == 7) hex = '7';
        else if (numbers[i] == 8) hex = '8';
        else if (numbers[i] == 9) hex = '9';
        else if (numbers[i] == 10) hex = 'A';
        else if (numbers[i] == 11) hex = 'B';
        else if (numbers[i] == 12) hex = 'C';
        else if (numbers[i] == 13) hex = 'D';
        else if (numbers[i] == 14) hex = 'E';
        else if (numbers[i] == 15) hex = 'F';
        else hex = '?';
        std::cout << i << " " << numbers[i] << " " << hex << std::endl;
    }
}
