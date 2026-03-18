#include<iostream>
#include "LAB3.h"

Node::Node(int value, Node* next) 
    : value(value), next(next)
{}

void Node::print_Node() const{
        std::cout << "Value: "<< value << " next: " << next << std::endl;
}

void print_List(const Node* init) {
    while(init != nullptr) {
        init->print_Node();
        init = init->next;  
    }
}

Node* update_Current(Node* current) {
    while (current != nullptr) {
        current = current->next;
    }
    return current;
}

Node* insert_End(int insert_Value, Node* insert_End) {
    insert_End->next = new Node{insert_Value};
    //clearstd::cout << "insert_End" << insert_End << " and " << insert_End->next << std::endl; 
    return insert_End->next;
}

Node* insert_After(int insert_value, Node* insert_After) { ///TRY WITH PREVIOUS
    //4, third (second -> new -> third)
    Node* newest = new Node{insert_value, insert_After->next};
    insert_After->next = newest;
    return insert_After->next;
}

Node* delete_After(Node* prev) {
    //std::cout << prev << std::endl;
    //std::cout << prev->next << std::endl;
    Node* to_delete = prev->next;
    prev->next = to_delete->next;
    delete to_delete;
    to_delete = nullptr; 
    return prev->next; // safe
}

void delete_List(Node* init) {
    Node* current = init->next; // first heap node
    while (current != nullptr) {
        Node* next = current->next; // save next before deleting
        delete current;             // delete current node
        current = next;             // move to next
    }
    init->next = nullptr; 
}

/*void print_Greeting() {
    std::cout << "first" << std::endl;
}*/