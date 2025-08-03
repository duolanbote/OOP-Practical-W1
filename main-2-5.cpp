#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int a[5] = {10, 9, 5, 2, 1};       
    int b[5] = {1, 2, 3, 4, 5};        
    int c[5] = {2, 1, 2, 3, 5};        

    std::cout << "a: " << is_descending(a, 5) << std::endl;
    std::cout << "b: " << is_descending(b, 5) << std::endl;
    std::cout << "c: " << is_descending(c, 5) << std::endl;

    return 0;
}
