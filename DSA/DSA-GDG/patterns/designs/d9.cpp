#include <iostream>
using namespace std;
int main() //done
{   for (int i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (int j = 4; j >= i; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= (2 * i - 1); k++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j < (i - 5); j++)
            {
                cout << " ";
            }

            for (int k = 1; k <= (21 - 2 * i); k++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
     return 0;
}