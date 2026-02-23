#include <iostream>
using namespace std;
int main()
{   
    for (int i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (int j = 6 - i; j > 0; j--)
            {
                cout << "*";
            }
            for (int k = 1; k <= (i * 2 - 2); k++)
            {
                cout << " ";
            }
            for (int l = 1; l <= 6 - i; l++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int k = 1; k <= i - 5; k++)
            {
                cout << "*";
            }
            for (int l = (i - 5) * (-2) + 10; l > 0; l--)
            {
                cout << " ";
            }
            for (int m = 1; m <= i - 5; m++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
     return 0;
}