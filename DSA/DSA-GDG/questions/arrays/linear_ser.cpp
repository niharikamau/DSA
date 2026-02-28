#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={3,2,1,9};
    int x =1;
     for( int i =0; i<arr.size(); i++){
            if(x==arr[i]) {
                cout<< i;
                return 0;
            }
        }
        cout<< -1;
        return 0;
}