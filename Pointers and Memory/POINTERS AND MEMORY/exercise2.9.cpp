#include<iostream>

/*Exercise 2.9. Write a program that places the value 3 on the stack and the value 5 on the
heap. Make sure that no memory leaks occur. */

int main() {
    int value_s{3};

    int* value_h = new int{5};
    std::cout << value_s << std::endl;
    std::cout << *value_h << std::endl;
    delete value_h;
    value_h = nullptr; //better practice
}