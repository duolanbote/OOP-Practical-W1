#include <iostream>


extern int num_count(int array[], int n, int number);

int main() {
    int test_array[6] = {1, 2, 3, 3, 5, 6};
    int result = num_count(test_array, 6, 3);

    std::cout << "Count = " << result << std::endl;
    return 0;
}
