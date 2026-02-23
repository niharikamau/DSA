#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Given an array of positive integers arr[], 
return the second largest element from the array. 
If the second largest element doesn't exist then return -1.*/

int main(){
     vector<int>  arr = {78984,2873,78999,2232};
         int slar = -1;
        int lar =arr[0];
        
        for(int i =0;i<arr.size();i++){
            if(arr[i]>=lar){
                lar=arr[i];
            }
        }
        for(int i =0;i<arr.size();i++){
            if(arr[i]!=lar && arr[i]>=slar) slar = arr[i];
        }
        cout<< slar;

    }

