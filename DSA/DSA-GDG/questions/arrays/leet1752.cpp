#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*1752. Check if Array Is Sorted and Rotated

 Given an array nums, return true if the array was originally 
sorted in non-decreasing order, 
then rotated some number of positions (including zero). 
Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results 
in an array B of the same length such that
B[i] == A[(i+x) % A.length] for every valid index i.*/

// HAD TO SEEK HELP FROM GPT
int main(){
    vector<int> nums =  {3,4,5,1,2};
      int n = nums.size();
        int drops = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n])
                drops++;
        }
         drops <= 1 ? cout<<"true" : cout<<"false";


    return 0;
}