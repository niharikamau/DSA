#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Given an array arr[]. The task is to find the largest element and return it.
int main(){
     vector<int>  arr = {1,8,90,7,56};
      int max = arr[0];
        for(int i =0; i<arr.size(); i++){
            if(arr[i]>=max) max = arr[i];
        }
        cout<<"largest element: "<< max;

    }


    
    
    
