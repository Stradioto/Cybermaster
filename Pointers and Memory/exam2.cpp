#include<iostream>

struct Node
{
    int const value{1};
    Node* next;
};

Node* n1 = new Node{1, nullptr};


int main()
{
    //Node* one {1, nullptr}; NO
    //node one{1, nullptr}; POSSIBLE, but wrong in the exercise
    one->next == nullptr;

    Node* first {};
    first->next == one;
    std::cout << &first->next << std::endl;
    std::cout << &first->value << std::endl;
    std::cout << first->value << std::endl;
   

    
    one->next == nullptr;

    //one = new int{1};
    //one->value = 1;
    std::cout << one->value << std::endl;
   
    Node* last  {      };
    

    
}