#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

class Package
{
    // step 0: Implement this class
    public:
        Package(std::string n, int y, int s, int c) {
            name = n;
            publicationYear = y;
            size = s;
            checksum = c;
        }

        //return name[0] + publicationYear + size == checksum;

        //operator Package==Package const
        std::string print_Name() const {
            return name;
        }

        int print_name_Position() const {
            return name[0];
        } 

        int print_Year() const {
            return publicationYear;
        } 
        int print_Size() const {
            return size;
            
        } 
        int print_Checksum() const {
            return checksum;  
        } 

        bool is_valid() const {
            if (name[0] + publicationYear + size == checksum) {
                return true;
            }
        }
        
    private:
        std::string name;
        int publicationYear;
        int size;
        int checksum;
};

    bool operator<(Package first, Package second) {
        if (first.print_Year() < second.print_Year()) {
            return true;
        }
    };

   


int main()
{
    std::vector<Package> package_list {
        /*      name           year  size  checksum */
        Package{"libstml-dev", 2023, 1024, 3155},
        Package{"emacs",       2025,  512, 2638},
        Package{"vscode",      2018, 8192, 9232},
        Package{"gcc",         2022, 2048, 4173},
        Package{"neofetch",    1998,  128, 2236},
        Package{"make",        2006, 1024, 3139},
        Package{"cmake",       2006, 1024, 3138}
    };

    /*if (package_list[0] < package_list[1]) {
        std::cout << package_list[1].print_Name() << std::endl;
    }*/
    //std::cout << package_list[0].print_name_Position() << std::endl;
    
     //std::cout << "different from valid: " << package_list.erase(package_list.begin() + 2) << std::endl;
    //std::cout << "different from valid: " << package_list[6].print_Name() << std::endl;

    for(int i=0; i < package_list.size(); i++) {
        if (!package_list[i].is_valid()) {
            package_list.erase(package_list.begin() + i);
        } 
    }

    // Step 1: Remove all invalid packages

    
    std::cout << "-== Package Stats ==-" << std::endl;

    // Step 2: Find the oldest packages

    std::string oldest;
    
    
   for(int i=1; i < package_list.size(); i++) {
        int first{package_list[i-1].print_Year()};
        int second{package_list[i].print_Year()};  
         
        if (first > second) {
           oldest = package_list[i].print_Name();
        }
          
    }

    // Step 3: Calculate the total size of all valid packages
    int total_size{0};

    for(Package i: package_list) {
        if (i.is_valid()) {
            total_size =+ i.print_Checksum();
        }
    }

    
    
    std::cout << "Oldest package: " << oldest << std::endl;
    std::cout << "Total size of all packages: " <<  total_size << std::endl;
}
