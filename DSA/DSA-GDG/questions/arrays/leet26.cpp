#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*26. remove duplictes from sorted array*/

int main(){
    vector<int>  nums= {0,0,1,2,2,3,4,4,4,5};
    int k =  1;
        int l =0;
        int h = l+1;
        while(h<nums.size()){
            if(nums[l]!=nums[h]){
                int temp = nums[l+1];
                nums[l+1]  =nums[h];
                nums[h]  = temp;
                l++;
                h++;
            }else{
                h++;
            }
        }
        k = l+1;
        cout<< k;

 }