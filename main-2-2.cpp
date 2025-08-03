#include <iostream>

extern int max_element(int array[], int n);

int main() {
    int nums[6] = {3, 27, 3, 100, 70, 9};

    int result = max_element(nums, 6);

    std::cout << "MAX:" << result << std::endl;

    return 0;
}