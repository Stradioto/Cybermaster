#include "LAB3.h"
#include<iostream>

int main() {
    Node header(1);
    //std::cout << "second is: " << &header << std::endl;
    Node* second{insert_End(2, &header)};
    /*print_Greeting();*/
    //std::cout << "second is: " << second << std::endl;
    
    Node* third{insert_End(3, second)};
    
    Node* forth{insert_End(4, third)};

    //print_List(&header);

    //Node* Newest{insert_After(5, second)};

    print_List(&header);

    //delete_List(&header);
    delete_After(second);

    Node* Newest{insert_After(5, second)};

    print_List(&header);
    //header.print_Node();
    //second->print_Node();
    //Newest->print_Node();
    //third->print_Node();
    //forth->print_Node();
    
    std::cout << "Current: " << update_Current(&header) << std::endl;

    delete_List(&header);

    print_List(&header);

    Node* Tenth{insert_End(10, &header)};
    Node* NewestAfterTenth{insert_After(11, Tenth)};

    print_List(&header);
    //std::cout << second.next->value << " " << second.next->next << std::endl;
}