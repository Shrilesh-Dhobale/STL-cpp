#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{10,5,20,15};
    v.clear();
    cout<<v.size()<<" ";
    if(v.empty()==true)
    {
        cout<<"empty";
    }
    else
    {
        cout<<"Not empty";
    }
    return 0;
}