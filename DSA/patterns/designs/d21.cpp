#include <iostream>
using namespace std;
int main()//CHECKOUT AGAIN
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j=1; (i==1 || i==7)&& (j <=4) ; j++)
        { 
            cout<<"*";
        }
        if(i!=1 || i!=7){
            for (int k = 1; (i%2==0)&&(k <=4); k++)
           {
             cout<<" ";
           }
           if((i%2!=0) && ((i!=1) &&(i!=7))){
              cout<<"*";
              for (int l = 2; l<=3; l++)
              {
                cout<<" ";
              }
              cout<<"*";
           }
        }
        cout<<"\n";        
    }
    
    return 0;
}