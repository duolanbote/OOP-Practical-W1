#include <iostream>

int* readNumbers();
int secondSmallestSum(int* numbers, int length);

int* readNumbers() {
    int* arr = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }
    return arr;
}

int secondSmallestSum(int* numbers, int length) {
    int maxSubs = length * (length + 1) / 2;
    int* sums = new int[maxSubs];
    int k = 0;

    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            sums[k] = sum;
            k++;
        }
    }

    int smallest = sums[0];
    int secondSmallest = sums[0];

    for (int i = 1; i < k; i++) {
        if (sums[i] < smallest) {
            secondSmallest = smallest;
            smallest = sums[i];
        } else if (sums[i] < secondSmallest || smallest == secondSmallest) {
            secondSmallest = sums[i];
        }
    }

    return secondSmallest;
}
