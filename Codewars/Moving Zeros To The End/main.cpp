#include <iostream>
#include <vector>

using namespace std;

std::vector<int> move_zeroes(const std::vector<int>& input) {
    vector<int> vec = input;
    int buffer = 0;
    int size = vec.size()-1;

    for(int i=1; i<size; i++){
        for(int j=size-1; j>=0; j--){
            if(vec[j]==0){
                buffer = vec[j+1];
                vec[j+1] = vec[j];
                vec[j] = buffer;
            }
        }
    } 
    return vec;
}

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    vec.push_back(5);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(9);

    for(int i=0; i<vec.size(); i++)
        cout<<move_zeroes(vec)[i];

    return 0;
}