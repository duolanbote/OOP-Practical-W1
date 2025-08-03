#include <iostream>

extern void print_pass_fail(char grade);

int main() {
    print_pass_fail('A'); 
    print_pass_fail('Z'); 
    print_pass_fail('F'); 
    return 0;
}
