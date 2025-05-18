#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<string, int> mp;
    for (auto val : a)
        mp[val]++;

    for (auto val : a)
       cout << mp[val] << endl;

    // for (auto [x, y] : mp)
    // {
    //     cout << x << " " << y <<  endl;
       
    // }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    solve();
    return 0;
}