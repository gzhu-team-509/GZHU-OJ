/* DIRTY HACK */
#include <iostream>
#include <string>
class MyCout 
{
public:
    MyCout()
    {
        std::cout << "Initialize" << std::endl;
        std::cout << "Hello,world!" << std::endl;
        std::cout << "Clean up" << std::endl;
    }

    MyCout operator <<(int n) {
        return *this;
    }
    MyCout operator <<(std::string s) {
        return *this;
    }
};

MyCout cout;

int endl = 0;
