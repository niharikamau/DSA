#include <iostream>
using namespace std;
int main()//done
{   
   for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                (j % 2 == 0) ? cout << "0 " : cout << "1 ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                (j % 2 == 0) ? cout << "1 " : cout << "0 ";
            }
        }

        cout << "\n";
    }
     return 0;
}