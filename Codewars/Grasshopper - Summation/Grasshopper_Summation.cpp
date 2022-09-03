#include <iostream>

int summation(int num)
{
    int suma=0;
    for(int i=0; i<=num; i++)
    {
        suma+=i;
    }
    return suma;
}

int main()
{
    std::cout<<summation(8);


    return 0;
}