#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// RECURSION

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
void parameterisedSum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    parameterisedSum(i - 1, sum + i);
}
void parameterisedFactorial(int i, int fac)
{
    if (i < 1)
    {
        cout << fac;
        return;
    }
    parameterisedFactorial(i - 1, fac * (i));
}
void arrayReverse(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    arrayReverse(i + 1, arr, n);
}
bool checkPallindrome(int i, string s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return checkPallindrome(i + 1, s);
}
int fibbonachi(int n)
{
    if (n <= 1)
        return n;
    int last = fibbonachi(n - 1);
    int slast = fibbonachi(n - 2);
    return last + slast;
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

    cout << "enter n: ";
    cin >> n;
    backtrackingLinearly(n, n);

    // print n to 1 using backtracking
    cout << "\nprint n to 1 using backtracking\n";

    cout << "enter n: ";
    cin >> n;
    backtrackingReverseLinearly(n, 1);
    // parameterised sum 1 to n
    cout << "\nparameterised recursion sum 1 to n\n";
    cout << "enter n: \n";
    cin >> n;
    parameterisedSum(n, 0);

    // factorial of n
    cout << "\nparameterised recursion factorial of n\n";
    cout << "enter n: \n";
    cin >> n;
    parameterisedFactorial(n, 1);

    // reverse an array
    cout << "\nreverse an array\n";
    cout << "enter n: \n";
    cin >> n;
    int arr[n];
    cout << "\nenter array " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    arrayReverse(0, arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // check string is pallindrome
    cout << "\ncheck string is pallindrome\n";
    cout << "enter string: \n";
    cin >> name;
    cout << checkPallindrome(0, name);

    // fibbonci
    cout << "\nfibbonaci\n";
    cout << "enter n: \n";
    cin >> n;
    cout << fibbonachi(n);

    return 0;
}