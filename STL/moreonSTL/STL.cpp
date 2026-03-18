#include "STL.h"
#include<iostream>


void print_Vector(const std::vector<int>& to_Print) {
    for (std::size_t i = 0; i<to_Print.size(); i++) {
        std::cout << to_Print[i] ;
    }
    std::cout << "" << std::endl;
/*
for (int x : to_Print) {
    std::cout << x << std::endl;
}
*/
}