#include<iostream>


/*
Exercise 1.3. Write code that implements the following diagram:
              
          ---------
          |       |
    ______V_____  |
    |value: 3  |  |
    |next: {} -|---
    |__________|
         A
*/

struct a {
            int value;
            a* next; //Points to the same Struct
         };

int main() {
    a Obj;
    Obj.value = 3;
    Obj.next = &Obj;

    std::cout << Obj.value << std::endl;
    std::cout << Obj.next << std::endl;
    
}