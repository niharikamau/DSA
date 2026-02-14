#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// BASIC MATHS STRVER 
int main(){
    //count digits

    // last digit extraction
    int x = 8982;
    for (int n = x; n>0; n/=10)
    {
        int last_digit = n%10;
        cout<<last_digit<<" ";

    }
    
    return  0;
}