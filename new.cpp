#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::vector;

bool isNumber(const std::string& s)
{
    return s.find_first_not_of("0123456789") == std::string::npos;
}

bool isPlussign(const std::string& s)
{
    return s.find_first_not_of("+") == std::string::npos;
}

bool isMinusssign(const std::string& s)
{
    return s.find_first_not_of("-") == std::string::npos;
}

bool isAlphabet(const std::string& s)
{
    return s.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == std::string::npos;
}

int main(int argc,char **argv)
{
  std::cout << "You have entered " << argc << " arguments. " << "\n";
  std::cout << "The program name is : " << argv[0] << "\n";
  vector<char*> v1;
  for (int i = 0; i < argc; i++)
  {
    //std::cout << argv[i] << "\n";
    char* ans = argv[i];
    v1.push_back(ans);
  }
  if (argc == 1){
    std::cout << "No arguments other than program name \n";
  }
  std::cout << "the vector size is " << v1.size() << "\n";
  std::cout << "\n";
  std::fstream file;
  file.open("vector_arg.txt",std::ios_base::out);
  for(int i=0;i<v1.size();i++)
    {
        file<<v1[i]<<std::endl;
    }
 
    file.close();
    file.open("vector_arg.txt", std::ios_base::in);
    if (file.is_open()){
    std::string inp;
    while(getline(file, inp)){
        std::cout << inp << "\n";
        if(isNumber(inp) == true)
        {
            std::cout << inp << " is a number \n";
        }
        else if(isMinusssign(inp) == true)
        {
            std::cout << inp << " is a minus sign \n";
        }
        else if(isPlussign(inp) == true)
        {
            std::cout << inp << "is a plus sign \n";
        }
        else if(isAlphabet(inp) == true)
        {
            std::cout << inp << " is an alphabet \n";
        }

    }
    file.close();
  return 0;
    }
}
