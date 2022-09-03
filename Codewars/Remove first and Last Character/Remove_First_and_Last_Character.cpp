#include <iostream>

std::string sliceString(std::string str)
{
    str.pop_back();
    str.erase(0,1);

    return str;
}

int main()
{
    std::string napis="country";

    std::cout<<sliceString(napis);

    return 0;
}