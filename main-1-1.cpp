#include <iostream>

extern int sum_function(int array[], int n);

int main(){

    int array[5] = {1,3,5,7,9};

    int result = sum_function(array,5);

    std::cout << "Sum = " << result << std::endl;

    return 0;
}
    


