#include <iostream>
#include <string>
#include <vector>

//Math Library Headers
#include "Lib\Math.h" // == int add(int a, int b); 

int main(int argc, char **argv){

    std::vector<std::string> text = {argv[1], " + ", argv[2], " = ", std::to_string(add(atoi(argv[1]),atoi(argv[2])))};

    for (auto t : text)
    {
        std::cout << t;
    }

    std::cout << std::endl;
    return 0;
}
