#include <iostream>
using namespace std;
int main()//done
{     char c = 'E';

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        c = c - i - 1;
        cout << "\n";
    }
    
     return 0;
}