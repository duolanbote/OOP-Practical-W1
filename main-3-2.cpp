#include <iostream>


extern int median_array(int array[], int n);

int main() {
    int data[] = {3, 5, 2, 1, 4};  
    int n = 5;                     

    int result = median_array(data, n);

    std::cout << "Median = " << result << std::endl;

    return 0;
}
