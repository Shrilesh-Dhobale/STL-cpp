#include<iostream>
#include<vector>
using namespace std;

bool MyCmp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second>p2.second;
}