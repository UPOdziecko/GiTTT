#include <iostream>
#include <string>

std::string encode(const std::string &str) 
{
    std::string string = str;
    for(int i=0; i<string.length(); i++)
    {
        if(str[i]=='a')
            string[i]='1';
        if(str[i]=='e')
            string[i]='2';
        if(str[i]=='i')
            string[i] = '3';
        if(str[i] == 'o')
            string[i] = '4';
        if(str[i]=='u')
            string[i]='5';
    }
    return string;
}

std::string decode(const std::string &str) 
{
    std::string string = str;
    for(int i=0; i<string.length(); i++)
    {
        if(str[i]=='1')
            string[i]='a';
        if(str[i]=='2')
            string[i]='e';
        if(str[i]=='3')
            string[i] = 'i';
        if(str[i] == '4')
            string[i] = 'o';
        if(str[i]=='5')
            string[i]='u';
    }
    return string;
}

int main()
{
    std::cout<<encode("How are you today ?")<<"\n";
    std::cout<<decode("h2ll4");
    
    

    return 0;
}