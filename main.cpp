#include "workshop.h"
#include <iostream>

int main(){
    {
    double p = 21 ;

    std::cout << "original value is:"<< p << std::endl;

    changeValue(&p);

    std::cout << "now value is:" << p << std::endl;

    
    }


    {
    double a[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 9.0};

    printArray(a, 6);   

    
    }


    {
    double a[6] = {1.0, 4.0, 9.0, 3.0, 10.0, 2.0};

    std::cout << arrayMax(a, 6) << std::endl;   
    }
    



    {
    double* p = dynamicArray(5, 2.5);
    for (int i = 0; i < 5; i++) std::cout << p[i] << " ";
    std::cout << std::endl;

    delete[] p;
    p = nullptr;
    }

    return 0;

}

