#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,3,4,5,6,4};
    int d= 13;
    d = d% arr.size();
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
        reverse(arr.begin(),arr.end());
    //printing the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}