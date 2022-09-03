#include <iostream>

using namespace std;

int solution(int number)
{
    int suma=0;
    if(number<3)
        return 0;
    else
    {
        for(int i=3; i<number; i++)
        {
            if((i%3==0)||(i%5==0))
            {
                suma+=i; 
            }
        }
        return suma;
    }
}

int main()
{
    cout<<solution(10)<<endl;
    cout<<solution(30)<<endl;
    cout<<solution(20);

    return 0;
}