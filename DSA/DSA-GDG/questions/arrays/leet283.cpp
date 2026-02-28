#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,0,1,2,0,0,5,4,3,0,9};
        int high = 1; //pointers pointing to indices
        int low =  0;
        while(high<nums.size()){
            if(nums[high]!=0 && nums[low]==0){
                int temp = nums[low];
                nums[low] = nums[high];
                nums[high]=temp;

                if(high==nums.size())break;
                high++;
                low++;
            }else if(nums[high]==0 && nums[low]!=0) {
                if(high==nums.size())break;
                high++;
                low++;
            }
            else if(nums[high]==0 && nums[low]==0) {
                if(high==nums.size())break;
                high++;
            }
            else{
                if(high==nums.size())break;
                high++;
                low++;
            }
        }
        //print array
        for (int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }
        
        return 0;
    }
