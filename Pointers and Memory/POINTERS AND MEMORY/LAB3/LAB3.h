#ifndef LAB3
#define LAB3

class Node {
    public:
        Node(int value, Node* next = nullptr); //constructor definition
        int value;
        Node* next;
        void print_Node() const;
};

void print_List(const Node* init);

Node* update_Current(Node* current);

Node* insert_End(int insert_value, Node* insert_End = nullptr);

Node* insert_After(int insert_value, Node* insert_After);

void delete_List(Node* init);

Node* delete_After(Node* prev);

/*void print_Greeting();*/
#endif//LAB3