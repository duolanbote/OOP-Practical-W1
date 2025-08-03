#include <iostream>

void print_pass_fail(char grade) {
    if (grade == 'A' || grade == 'B' || grade == 'C') {
        std::cout << "Pass" << std::endl;
    } else if (grade == 'D' || grade == 'E') {
        std::cout << "Fail" << std::endl;
    } else {
        std::cout << "Nothing" << std::endl;
    }
}
