#include <iostream>


extern int count_evens(int number);

int main() {
    int input = 100;
    int result = count_evens(input);

    std::cout << "even numbers from 1 to " << input << " = " << result << std::endl;
    return 0;
}
