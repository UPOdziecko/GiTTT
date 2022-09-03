#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

static long findMissing(std::vector<long> list){
    long difference = (list[list.size()-1] - list[0]) / (long)list.size();
    long sum;
    for(int i=0; i<list.size(); i++){
        if(list[i]!=list[i-1]+difference)
            sum = list[i]-difference;
    }
    return sum;
}

int main(){
    vector<long> vec;
    vec.push_back(0);
    vec.push_back(-30);
    vec.push_back(-45);

    cout<<findMissing(vec)<<"\n";

    return 0;
}