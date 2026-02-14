#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// BASIC MATHS STRVER 
int main(){
    //count digits

    // last digit extraction
    int x = 153;
    for (int n = x; n>0; n/=10)   //O(logn)
    {
        int last_digit = n%10;
        cout<<last_digit<<" ";

    }
    //currently, unable to understand the log method to count didgits.

    //reverse a number.

    int reverseN =0;
    for (int n = x; n>0; n/=10)   //O(logn)
    {
        int last_digit = n%10;
        reverseN =reverseN*10 +last_digit;
    }
    cout<<"\nreversed no. : "<<reverseN;

    //check pallindrome in int

    reverseN==x? cout<<"\npallindrome":cout<<"\nnot pallindrome";

    //armstrong no.
    int count =0;
    int Ano =0;
    for (int n = x; n >0; n/=10)
    {
        count++;
    }
    for (int n = x; n > 0; n/=10)
    {
        int last_digit = n%10;
        Ano += pow(last_digit,count);
    }
    Ano==x ? cout<<"\narmstrong no.":cout<<"\nnot armstrong no.";

    //print all divisors
    int y =36;
    cout<<"\ndivisors of 36 are: ";
    for(int i=1; i!=(y+1); i++){
        if(y%i==0)cout<<i<<" ";
    }

    //did not fully understand the square root n thing yet.

    //checkprime
    y =31;
    int cnt =0;

    for (int i = 1; i*i<=y; i++)
    {
        if(y%i==0){
            cnt++;
            if((y/i)!=i) cnt++;
        }

    }
    cout<<"\n"<<y<<" is ";
    cnt ==2 ? cout<<"prime":cout<<"not prime";
    



    return  0;
}