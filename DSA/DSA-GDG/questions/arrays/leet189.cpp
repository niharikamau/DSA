#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*189. Rotate the array

Given an integer array nums, 
rotate the array to the right by k steps, where k is non-negative.*/

// HAD TO SEEK HELP FROM GPT

int main(){
    vector<int> nums ={1,2,3,4,5};
    int k =1;
   
        int n = nums.size();
        if (n == 0) return 0;

        k %= n;              
        if (k == 0) return 0;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
        //print the ans
        for (int i = 0; i < n; i++)
        {
            cout<<nums[i]<<" ";
        }
        
    return 0;
    

}