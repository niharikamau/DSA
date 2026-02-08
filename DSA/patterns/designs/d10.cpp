#include <iostream>
using namespace std;
int main()
{     for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; (i <= 5) && (j <= i); j++)
        {
            cout << "*";
        }
        for (int k = (10 - i); (i >= 6) && (k > 0); k--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}