#include <iostream>
#include <string>

int solution(std::string roman)
{
    int n=0;
    for(int i=roman.length()-1; i>=0; i--)
    {
        if(roman[i]=='I')
            n+=1;
        else if(roman[i]=='V')
        {
            if(roman[i-1]=='I') n+=3;
            else n+=5;
        }
        else if(roman[i]=='X')
        {
            if(roman[i-1]=='I') n+=8;
            else n+=10;
        }
        else if(roman[i]=='L')
        {
            if(roman[i-1]=='X') n+=30;
            else n+=50;
        }
        else if(roman[i]=='C')
        {
            if(roman[i-1]=='X') n+=80;
            else n+=100;
        }
        else if(roman[i]=='D')
        {
            if(roman[i-1]=='C') n+=300;
            else n+=500;
        }
        else if(roman[i]=='M')
        {
            if(roman[i-1]=='C') n+=800;
            else n+=1000;
        }
    }
    
    return n;
}

int main()
{
    std::string str = "MMMDCCCLXXXVIII";
    std::cout<<solution(str);


    return 0;
}