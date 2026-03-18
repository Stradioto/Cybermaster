#include "secondCodeReview.h"
#include<iostream> 
#include<fstream>
#include<string>

/*
<filename>

--backup <backup filename>
OR

*/

int main(int argc, char* argv[]) {
    std::string filetoread;
    std::string backuptowrite;

    if (argv[1]) {
            filetoread = std::string(argv[1]);
        }

    output("THIS ARE THE FILE AND PROCEDURES SELECTED");

    for (int i=2;i<argc;i++) {
            //output(argv[i]);
        if (std::string(argv[i]) == "--backup") {
            output("Backup copy enabled");
            backuptowrite = argv[i + 1];
        }
    }

    output("----------------------------------------------------------");
    output("OPENING FILE");

    
    std::ofstream out(backuptowrite);

    std::ifstream in(filetoread);

    std::string s;

        if (in.is_open()) {
            if(std::getline(in, s)) {
                std::cout << s << '\n';
                if (out.is_open()) {
                    out << s << '\n';
                }
            }
        }
        else std::cerr << "valid file not selected" << std::endl;


    return 0;
}