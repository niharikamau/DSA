#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //          Q1

    cout << "\nQUESTION 1\n";

    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr1[i] << ' ';

    //          Q2

    cout << "\n\nQUESTION 2\n";

    cout << "Enter size: ";
    cin >> n;
    vector<int> arr2(n);
    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    cout << "Squared elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] * arr2[i] << ' ';

    //          Q3

    cout << "\n\nQUESTION 3\n";

    cout << "Enter size: ";
    cin >> n;
    vector<int> arr3(n);
    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
        cin >> arr3[i];
    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr3[i] << ' ';
    cout << "\nSquared Array: ";
    for (int i = 0; i < n; i++)
        cout << arr3[i] * arr3[i] << ' ';

    //          Q4

    cout << "\n\nQUESTION 4\n";

    int matrix[3][3];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];
    }
    cout << "Matrix is:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << ' ';
        cout << "\n";
    }

    //          Q5

    cout << "\nQUESTION 5\n";

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            sum += matrix[i][j];
    }
    cout << "Sum of all elements = " << sum;

    //          Q6

    cout << "\n\nQUESTION 6\n";

    cout << "Diagonal elements: ";
    for (int i = 0; i < 3; i++)
        cout << matrix[i][i] << ' ';

    //          Q7

    cout << "\n\nQUESTION 7\n";

    cout << "Enter size: ";
    cin >> n;
    vector<int> arr4(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr4[i];
    int max = arr4[0];
    for (int i = 0; i < n; i++)
        if (arr4[i] >= max)
            max = arr4[i];
    cout << "Largest element = " << max;

    //          Q8

    cout << "\n\nQUESTION 8\n";

    cout << "Enter size: ";
    cin >> n;
    vector<int> arr5(n);
    int even = 0;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr5[i];
        if (arr5[i] % 2 == 0)
            even++;
    }
    cout << "Number of even elements = " << even;

    //          Q9

    cout << "\n\nQUESTION 9\n";

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += matrix[i][j];
        cout << "Row " << i + 1 << " sum = " << sum << "\n";
    }

    //          Q10

    cout << "\nQUESTION 10\n";

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += matrix[j][i];
        cout << "Column " << i + 1 << " sum = " << sum << "\n";
    }

    //          Q11

    cout << "\nQUESTION 11\n";

    string name, year;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your year: ";
    cin >> year;

    cout << "My name is " << name << " and I am currently a " << year << " year student.\n";

    return 0;
}
