#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v {10,5,20};

    for(auto x :v){
        cout<<x<<" ";
    }
    return 0;
}