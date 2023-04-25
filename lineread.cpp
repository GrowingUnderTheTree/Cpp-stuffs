#include <iostream>
#include <fstream>
#include <string>

bool isNumber(const std::string& s)
{
    return s.find_first_not_of("0123456789") == std::string::npos;
}

int main() {
    int sum = 0;
    int x;
    std::fstream file;
    file.open("vector_arg.txt", std::ios::in);
    if (file.is_open()){
    std::string inp;
    while(getline(file, inp)){
        std::cout << inp << "\n";
        ! isNumber(inp) ? std::cout << inp << "is not a number \n" : std::cout << inp << "is a number";
    }
    file.close();
    }
}