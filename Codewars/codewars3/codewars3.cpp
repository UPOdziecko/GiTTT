#include <iostream>
#include <vector>
#include <bits/stdc++.h>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    int m1=INT_MAX;

    for(int i=0; i<numbers.size(); i++)
    {
        if(numbers[i]<m1) 
            m1=numbers[i];
    }

    int m2=INT_MAX;

    for(int i=0; i<numbers.size(); i++)
    {
        if((numbers[i]<m2)&&(numbers[i]>m1))
            m2=numbers[i];
    }
    
    return m1+m2;
}

int main()
{
    std::vector<int> tab={5,8,12,19,22};
    std::cout<<sumTwoSmallestNumbers(tab);

    return 0;
}