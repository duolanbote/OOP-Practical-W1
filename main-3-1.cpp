#include <iostream>


extern bool is_fanarray(int array[], int n);

int main() {
    int a1[] = {1, 2, 3, 2, 1};       
          
    int a2[] = {1, 2, 1, 2, 1};       
          

    std::cout << "a1 is fanarray: " << is_fanarray(a1, 5) << std::endl;
    std::cout << "a2 is fanarray: " << is_fanarray(a2, 5) << std::endl;
    
    

    return 0;
}
