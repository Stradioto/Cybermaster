#include "STL.h"
#include<iostream>


std::vector<int> v{1,2,3,4};
std::vector<int> v_new{5,7};
std::vector<int> v_move{7};
std::vector<int> v_range;
int main(){
    //v.assign( 1, 5);
    //v_range.assign(v.begin(),v.end());
    //print_Vector(v);
    v_range.assign({1,2,3});
    print_Vector(v_range);
    //v_range.assign(v.front(),v.back());
    //print_Vector(v);
    std::cout << v.at(0) << std::endl;
    v=v_new;
    print_Vector(v);
    v=std::move(v_move);
    print_Vector(v_move);
    v.insert(v.begin(),9);
    print_Vector(v);

    /////////
    
}