// https://codeforces.com/problemset/problem/1980/B

#include <bits/stdc++.h>
using namespace std;

void choosing_cubs()
{
    int n, f, k, fav;
    cin >> n >> f >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    fav = a[f - 1];

    sort(a.begin(), a.end(), greater<int>());

    if (k == n || a[k] < fav)
        cout << "YES" << endl;
    else if (a[k] == fav && a[k - 1] == fav)
        cout << "MAYBE" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        choosing_cubs();
    return 0;
}