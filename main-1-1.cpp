#include <iostream>

extern int array_sum(int array[], int n);

int main(){

    int array[5] = {1,3,5,7,9};

    int result = array_sum(array,5);

    std::cout << "Sum = " << result << std::endl;

    return 0;
}
    


