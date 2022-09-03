#include <iostream>

using namespace std;

int beeramid(int bonus, double price){
    unsigned int beers = bonus/price;
    unsigned int numberOfBeersIn = 1;
    unsigned int numberOfPyramids = 0;
    unsigned int number = 1;
    

    while(beers>=numberOfBeersIn){
        //if(beers>=numberOfBeersIn){
            numberOfPyramids++;
            beers -= numberOfBeersIn;
        //}
            
        number += 2;
        numberOfBeersIn +=  number;
    }

    return numberOfPyramids;
}

int main(){
    cout<<beeramid(11,2);
    //should returns 2

    return 0;
}