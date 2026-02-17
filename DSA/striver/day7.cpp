#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printName(string name, int n, int i)
{
    if (i > n)
        return;
    cout << name << "\n";
    printName(name, n, i + 1);
}
void printLinearly(int n, int i)
{
    if (i > n)
        return;
    cout << i << " ";
    printLinearly(n, i + 1);
}
void printReverseLinearly(int n, int i)
{
    if (i == n)
        return;
    cout << n - i << " ";
    printReverseLinearly(n, i + 1);
}
void backtrackingLinearly(int n, int i)
{
    if (i < 1)
        return;
    backtrackingLinearly(n, i - 1);
    cout << i << " ";
}
void backtrackingReverseLinearly(int n, int i)
{
    if (i > n)
        return;
    backtrackingReverseLinearly(n, i + 1);
    cout << i << " ";
}
int main()
{
    // print name n times
    cout << "print name n times\n";
    cout << "enter name:\n";

    int n = 0;
    string name;
    cin >> name;

    cout << "enter how many times: ";
    cin >> n;

    printName(name, n, 1);

    // print linearly from 1 to n
    cout << "print linerly from 1 to n\n";

    cout << "enter n: ";
    cin >> n;
    printLinearly(n, 1);

    // print lineraly from n to 1.
    cout << "\nprint linerly from n to 1\n";

    cout << "enter n: ";
    cin >> n;
    printReverseLinearly(n, 0);

    // print 1 to  n using backtracking
    cout << "\nprint 1 to n using backtracking\n";

    cout<<"enter n: ";
    cin >> n;
    backtrackingLinearly(n, n);

    // print n to 1 using backtracking
    cout << "\nprint n to 1 using backtracking\n";

    cout<<"enter n: ";
    cin >> n;
    backtrackingReverseLinearly(n, 1);
    return 0;
}