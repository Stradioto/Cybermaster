#include<iostream>
#include<string>

//Exercise 1.1
//(a) A pointer to an integer
int number{10};
int* ptr_number{&number};

//(b) A pointer to a string
std::string phrase{"This is a string!"};
std::string* ptr_phrase{&phrase};

//(c) A pointer to a constant integer
int const const_Number{3};
int const* ptr_Const_Number{&const_Number}; //Read as: "ptr is a pointer to a const int" → the int is const, pointer is not.

//(d) A constant pointer to a integer ******
int second_Number{5};
int* const ptr_Const_Second_Number{&second_Number}; //Read as: "ptr is a const pointer to int" → the pointer itself is const, the value it points to is not.

//(e) A constant pointer to a constant integer
int const const_Second_Number{2};
int const* const ptr_Const_Seconde_Number{&const_Second_Number};

//(f) A pointer to an integer pointer
int another_Number{1};
int* ptr_Another_Number{&another_Number};
int** ptr_Pointer_To_Pointer{&ptr_Another_Number};

//(g) A pointer to a constant integer pointer
int const const_Another_Number{7};
int const* const ptr_Const_Another_Number{&const_Another_Number};
int const* const* ptr_Pointer_To_Another_Pointer{&ptr_Const_Another_Number};

int main () {
    std::cout << "Exercise 1.2. Use words to describe the following declarations:" << std::endl;
    std::cout <<    "(a) int* const* -> Pointer to a const pointer to an int"      << std::endl;
    std::cout <<    "(b) int const* -> Pointer to a const int"                     << std::endl;
    std::cout <<    "(c) int* -> Pointer to an int"                                << std::endl;
    std::cout <<    "(d) std::string* -> Pointer to a string"                      << std::endl;
    std::cout <<    "(e) int** -> Pointer to a pointer to an int"                  << std::endl;
    std::cout <<    "(f) int const* const -> Const pointer to a const int"         << std::endl;
    std::cout <<    "(g) int* const -> Const pointer to an int"                    << std::endl;
}


