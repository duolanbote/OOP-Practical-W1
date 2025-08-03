#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    int a[5] = {10, 9, 5, 2, 1};       
    int b[5] = {1, 2, 3, 4, 5};        
    int c[5] = {2, 1, 2, 3, 5};        

    std::cout << "a: " << is_ascending(a, 5) << std::endl;
    std::cout << "b: " << is_ascending(b, 5) << std::endl;
    std::cout << "c: " << is_ascending(c, 5) << std::endl;

    return 0;
}