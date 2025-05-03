#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int l = 0, r = 0, cnt = 0;
    while (r < m)
    {
        if (l < n && a[l] < b[r])
        {
            l++;
            cnt++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }

    return 0;
}