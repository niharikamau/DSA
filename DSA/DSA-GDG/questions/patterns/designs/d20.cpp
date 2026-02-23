#include <iostream>
using namespace std;
int main()
{    
      for (int i = 1; i <=9; i++)
    {
        if (i<=5){
            for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <=i*(-2)+10; k++)
        {
            cout<<" ";
        }
        for (int l = 1; l <=i; l++)
        {
            cout<<"*";
        }
        }else{
            for (int j =1; j <=10-i; j++)
            {
                cout<<"*";
            }
            for (int k = 1; k <= 2*i-10 ; k++)
            {
                cout<<" ";
            }
            for (int l = 1; l <= 10-i; l++)
            {
                cout<<"*";
            }            
            
        }
        cout<<"\n";       
    }
    return 0;
}