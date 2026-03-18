#include <iostream>

// Your code here
class Room {
    public:
        Room () = default;
    
        virtual int capacity() const = 0;
};

class Computerlab: public Room {
    public:
        Computerlab (int nc) {
            nr_of_computers = nc;
        };
    private:
        int nr_of_computers;

        int capacity() const override {
            return nr_of_computers * 2;
        };
};

class Lecturehall: public Room {
    public:
        Lecturehall (int r, int c) {
            rows = r;
            cols = c;
        }; 
        
    private:
        int rows;
        int cols;

    private:
        int capacity() const override {
            return (rows * cols) + 1;
        };
};



void print_capacity(Room const& room)
{
    std::cout << "Capacity is " << room.capacity() << std::endl;
}

int main()
{
    Computerlab lis1 {9};
    Lecturehall bl32 {8, 9};
    Lecturehall i101 {12, 14};
    Computerlab su10 {10};
    Computerlab su17 {24};

    print_capacity(lis1);
    print_capacity(bl32);
    print_capacity(i101);
    print_capacity(su10);
    print_capacity(su17);
    
    return 0;
}