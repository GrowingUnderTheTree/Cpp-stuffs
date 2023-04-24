#include <iostream>
#include <vector>
#include <fstream>
using std::vector;

int main(int argc,char **argv)
{
  std::cout << "You have entered " << argc << " arguments. " << "\n";
  std::cout << "The program name is : " << argv[0] << "\n";
  vector<char*> v1;
  for (int i = 0; i < argc; i++)
  {
    std::cout << argv[i] << "\n";
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
 
  return 0;
}