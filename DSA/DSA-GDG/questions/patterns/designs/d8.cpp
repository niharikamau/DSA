#include <iostream>
using namespace std;
int main()//dones
{  for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 11 - 2 * i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
      return 0;
}