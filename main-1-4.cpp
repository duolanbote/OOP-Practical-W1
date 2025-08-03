#include <iostream>


extern int sum_two_arrays(int array1[], int secondaryarray[], int n);

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {4, 5, 6, 7, 8};

    int result = sum_two_arrays(a, b, 2);
    std::cout << "Total = " << result << std::endl;

    return 0;
}
