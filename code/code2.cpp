#include <iostream>
#include <fstream>
#include <vector>

int main() 
{

    std::ifstream file("file.txt");
    std::ofstream file2("file2.txt");

    std::vector<std::string> names;
    std::string input;

   getline(file,input);
   std::cout<<input;

    return 0;
}