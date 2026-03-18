#include "commands.h"
#include<iostream>
#include<string>

int main(int argc, char* argv[]) {
    
    int int1{};
    int int2{};

    print("Select operator:");

    std::cin>>int1;
    std::cin>>int2;

    for (int i{0}; i < argc; ++i)
    {
        //std::cout << argv[i] << std::endl;
        if (std::string(argv[i]) == "+") {
            int result = int1 + int2;
            std::cout << "the sum is: " << result << std::endl;
        }
        if (std::string(argv[i]) == "-") {
            int result = int1 - int2;
            std::cout << "the substraction is: " << result << std::endl;
        }
        if (std::string(argv[i]) == "x") { //* is reserved to print related files
            int result = int1 * int2;
            std::cout << "the multiplication is: " << result << std::endl;
        }
    }
   

    
}