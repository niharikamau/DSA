#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//C++ STL
int main(){
    //pair
    pair<int,int> p = {2,3};
    cout<<p.first<<"\n";

    pair<string,int> p1 =  {"hello",2};
    cout<<p1.first<<" "<<p1.second<<"\n";

    pair<int,char> a[] ={{2,'c'},{3,'f'},{4,'d'}};
    cout<<a[1].second<<"\n";

    pair<int ,pair<string,char>> p2  ={3,{"sh",'s'}};
    cout<<p2.second.first;

    return 0;
}