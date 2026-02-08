#include <iostream>
using namespace std;
int main()//done
{     for (int i = 1; i <= 4; i++)
    {
       char c = 'A';
        char c2 = 'A';
        if (i >= 2)
            c2 = c2 + i - 2;

        for (int j = 4 - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << c;
            c++;
        }
        for (int l = 1; (i > 1) && (l <= i - 1); l++)
        {
            cout << c2;
            c2--;
        }
        cout << "\n";
    }
    return 0;
}