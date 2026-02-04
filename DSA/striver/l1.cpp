#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool checkPallindrome(string s)
{
    int flag =0;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i]) return false;
    }
    return true;
}
int main()
{ // LESSON 1, C++ BASICS

    // function to check palindrome
    string s;
    cin >> s;
    cout << (checkPallindrome(s)? "YES" : "NO");
    return 0;
}
