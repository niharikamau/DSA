#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// C++ STL
int main()
{
    // pair
    pair<int, int> p = {2, 3};
    cout << p.first << "\n";

    pair<string, int> p1 = {"hello", 2};
    cout << p1.first << " " << p1.second << "\n";

    pair<int, char> a[] = {{2, 'c'}, {3, 'f'}, {4, 'd'}};
    cout << a[1].second << "\n";

    pair<int, pair<string, char>> p2 = {3, {"sh", 's'}};
    cout << p2.second.first;

    cout << "\n"
         << "vector" << "\n";

    // vector
    vector<vector<int>> vec;
    vec.push_back({1, 2, 2});
    vec.push_back({2, 1, 2});
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        for (auto x : *i)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    cout << "\n"
         << "auto" << "\n";

    // auto
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);

    auto it = v.begin();
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n"
         << "list, deque" << "\n";

    // list, deque
    list<int> ls;
    ls.push_front(2);
    ls.emplace_front(1);

    deque<int> dq;

    // stack
    cout << "\n"
         << "stack" << "\n";

    stack<int> st, st1;
    st.push(2);
    st.emplace(9);
    st.push(1);
    cout << "top of stack: " << st.top() << " size : " << st.size();
    st.pop();
    st1.push(0);
    st1.emplace(1);
    st.swap(st1);

    // queue
    cout << "\n"
         << "queue" << "\n";
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); //{1,2,4}
    cout << "queue front: " << q.front();

    // priority queue
    cout << "\n"
         << "priority queue" << "\n";

    priority_queue<int> pq;

    // set
    cout << "\n"
         << "set" << "\n";
    set<int> seet;
    seet.insert(1);  //{1}
    seet.emplace(2); //{1,2}
    seet.insert(2);  //{1,2}
    seet.insert(4);  //{1,2,4}
    seet.insert(3);  //{1,2,3,4}

    cout << "count of 2 in set: " << seet.count(2);

    seet.clear();

    // multiset
    cout << "\n"
         << "multi set" << "\n";
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}

    ms.erase(1);
    cout << "multiset  is empty? 1 for true and 0 for false :- " << ms.empty();

    // map
    cout << "\n"
         << "map" << "\n";
    map<char, int> mp;
    mp['a'] = 3;
    mp['c'] = 2;
    mp['b'] = 2;
    cout << "map of b key is: " << mp['b'] << "\n";

    // sort and etc functions:
    cout << "\n"
         << "functions" << "\n";
    vector<int> sort_ex = {1, 2, 3, 1, 2, 9};
    sort(sort_ex.begin(), sort_ex.end());
    cout << "ascending order : ";

    for (auto i : sort_ex)
    {
        cout << i << " ";
    }
    cout << "\ndescending sorted vector: ";
    sort(sort_ex.begin(), sort_ex.end(), greater<int>());
    for (auto i : sort_ex)
    {
        cout << i << " ";
    }
    return 0;

    // ALL STL CONTAINERS AND ALGOS DETAILS ARE COVERED IN NOTES.
}