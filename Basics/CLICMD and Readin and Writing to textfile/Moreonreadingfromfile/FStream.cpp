#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

//./a.exe | more -> page by page

int main() {
    std::cout << "FSTREAM CODE // Formatting"; 

    std::ifstream in{"DATA.txt"};
    
    std::string line{};
    
    if (!in.is_open()) {
        std::cout << "fail!" << '\n';
    }
    while(std::getline(in, line)) {
            std::cout << line;
    }

    

    /*istd::string line;
    int x;

    
    else {
        n >> x;
        in.ignore(1000, '\n');
        std::getline(in, line);

        std::cout << x << "\n";
        std::cout << line << "\n"; WORKS FOR: "42 Hello word" in .txt
    }*/
   
}