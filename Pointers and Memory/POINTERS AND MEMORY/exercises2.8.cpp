/*
2 Dynamic memory
Exercise 2.8. Create a program that:
1. dynamically allocates a std::string on the heap with the value "hello".
2. Prints the value of the allocated string.
3. Deallocates the string.
*/

#include<iostream>
#include<string>

int main() {
    std::string* gretting = new std::string{"hello"};
    std::cout << gretting << std::endl;
    delete  gretting;
}