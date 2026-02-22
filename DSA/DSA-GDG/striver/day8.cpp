#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// HASHING
int main()
{ // array hashing

    // assuming elements are small, non- negative and less than the size of hash array.
    // a[i]<n+1, where n is size of given array
    int n, k, q, x;
    cout << "\nARRAY HASHING:\n";
    cout << "enter array size:\n";
    cin >> n;
    int a[n], hash[n + 1];
    cout << "enter array elements:\n";
    for (int i = 0; 0 <= i && i < n; i++)
    {
        cin >> x;
        if (x < n + 1)
            a[i] = x;
        else
        {
            cout << "invalid element, enter again:\n";
            i--;
        }
    }
    for (int i = 0; i < n + 1; i++)
        hash[i] = 0;

    for (int i = 0; i < n; i++)
        hash[a[i]]++;

    cout << "no. of queries? ";
    cin >> k;
    cout << "enter query:\n";
    int ans[k];
    for (int i = 0; i < k; i++)
    {
        cin >> q;
        if (q >= n + 1)
            ans[i] = 0;
        else
            ans[i] = hash[q];
        cout << q << " occured " << ans[i] << " time.\n";
    }

    // using map number hashing
    cout << "\nMAP HASHING:\n";

    map<int, int> mp;
    cout << "enter size of array: ";
    int n1;
    cin >> n1;
    int ar[n1];
    cout << "enter " << n1 << " elements:\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " has occured " << it.second << " time.\n";
    }

    // find the highest/lowest frequency element
    cout << "\nHIGHEST/LOWEST FREQ:\n";

    cout << "enter size of array:\n";
    int n2;
    cin >> n2;
    int arr[n2];
    unordered_map<int, int> mpp;
    cout << "enter array elements:\n";

    for (int i = 0; i < n2; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    int max_v = mpp[arr[0]];
    int min_v = max_v;
    int max_k = arr[0];
    int min_k = max_k;
    for (auto it : mpp)
    {
        if (it.second >= max_v)
        {
            max_v = it.second;
            max_k = it.first;
        }
        else if (it.second < min_v)
        {
            min_v = it.second;
            min_k = it.first;
        }
    }
    cout << "highest frequency: " << max_k << ", of freq: " << max_v << "\n";
    cout << "lowest frequency: " << min_k << ", of freq: " << min_v;

    //character hashing is covered in notes.

    return 0;
}