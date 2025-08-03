#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    int nums[10] = {6, 5, 1, 9, 2, 7, 5, 2, 9, 9};

    two_five_nine(nums, 10);

    return 0;
}
