#include <iostream>
#include <vector>

class Kata
{
public:

    std::vector<int> sortArray(std::vector<int> array)
    {
        for(int i=1; i<array.size(); i++)
        {   
            for(int j=array.size()-1; j>=1; j--)
            {
                if((array[j]<array[j-1])&&(array[j]%2==1)&&(array[j-1]%2==1))
                {
                    int bufor;
                    bufor=array[j-1];
                    array[j-1]=array[j];
                    array[j]=bufor;
                }
            }
        }

        return array;
    }
};

int main()
{
    std::vector<int> tab;

    tab.push_back(1);
    tab.push_back(8);
    tab.push_back(3);
    tab.push_back(6);
    tab.push_back(5);
    tab.push_back(4);
    tab.push_back(7);
    tab.push_back(2);
    tab.push_back(9);
    tab.push_back(0);

    Kata t1;
    t1.sortArray(tab);


    return 0;
}