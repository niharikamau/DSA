#include <iostream>
using namespace std;
int main() //done
{    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << 6 - j;
        }
        cout << "\n";
    }
    return 0;
}