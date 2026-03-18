#include<iostream>

struct A {
    int* ptr1_A;
    A* next;
};

struct B {
    int* ptr1_B;
    int* ptr2_B;
};



int main() {
    int y{2};
    int x{1};
    
    A a2 {&y, nullptr}; 
    A a {&x, &a2};
    B b{a.ptr1_A, &y};


    std::cout << a2.ptr1_A << " " << a2.next << std::endl; 
    std::cout << a.ptr1_A << " " << a.next << std::endl; 
    std::cout << b.ptr1_B << " " << b.ptr2_B << std::endl;

    /*Exercise 1.6. Suppose the B object in exercise 1.5 is called b. Write a single line of code
that uses b and returns the value of x. Note, you are not allowed to directly refer to x.*/
    std::cout << *b.ptr1_B << std::endl;

    /*Exercise 1.7. Suppose that the left-most A in exercise 1.5 is called a. Write a single line of
code that uses a and returns the value of y. Note, you are not allowed to directly refer to
y.*/
    std::cout << *a.ptr1_A << std::endl; 


}

