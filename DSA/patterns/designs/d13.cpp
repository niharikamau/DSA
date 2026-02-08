#include <iostream>
using namespace std;
int main()//done
{   
    int n = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << "\n";
    }
    return 0;
}