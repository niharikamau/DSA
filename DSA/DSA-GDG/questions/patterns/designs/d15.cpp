#include <iostream>
using namespace std;
int main()//done
{      for (int i = 1; i <= 5; i++)
    {
        char c = 'A';
        for (int j = 5; j >= i; j--)
        {
            cout << c;
            c++;
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}