
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m; // 0(1)
    cin >> n >> m;
 
    vector<int> a(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++) // 0(n)
    {
        cin >> a[i];
    }
 
    // characteristics of set 1. sorted 2. unique
    set<int> s;
    // For calculation will walk from the end of the array
    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size();
    }
 
    while (m--)
    {
        int pos;
        cin >> pos;
 
        cout << cnt[pos] << endl;
    }
    // while (m--) // 0(n)
    // {
    //     int pos;
    //     cin >> pos;
 
    //     // characteristics of se
    //     // 1. sorted value 2. unique value
    //     set<int> s;
 
    //     for (int i = pos; i <= n; i++) // 0(n)
    //         s.insert(a[i]);            // 0(logn)
 
    //     cout << s.size() << endl;
    // }
 
    return 0;
}