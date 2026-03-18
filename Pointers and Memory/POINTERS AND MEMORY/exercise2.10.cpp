/*Exercise 2.10. Improve the following code by removing unnecessary allocations and ensuring
that no memory leaks occur:*/

    struct Node
    {
    int value { };
    Node* next { };
    };

    Node* insert_after ( Node *node , int value )
    {
    node -> next = new Node { value , node -> next };
    
    return node->next;
    }

    int main ()
    {
    

    Node* head { new Node { 1 } };

    Node* second { insert_after ( head , 2) };
    Node* third { insert_after ( second , 3) };
    Node* forthy{insert_after ( third , 4)};
    delete head;
    delete second;
    delete third;
    delete forthy;

    }

