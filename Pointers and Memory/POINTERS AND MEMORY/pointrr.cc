/*
int x{5};
int y{7};
int* ptr{&x}; -> creates pointer of type int pointing to adress of variable x
ptr = &y; -> changes ponter reference to adress of variable y
*ptr = 10; -> changes value of variable in the pointed adress(y)
cout << *ptr << endl; prints the value in the pointed adress(y)
*/

#include<iostream>

int main () {
    int x { 17 };
    int* ptr { &x };
// what does this print?
    std::cout << *&x << std::endl;
    std::cout << &x << std::endl;
    std::cout << *ptr << std::endl;
// How about this?
    std::cout << &*ptr << std::endl;
}