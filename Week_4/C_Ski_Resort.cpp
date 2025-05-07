#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        // the length of the array a, the minimum number of days at the resort, the maximum comfortable temperature for Dima
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
                cnt++;
            else
                cnt = 0;

            if (cnt >= k)
                ans += (cnt - k + 1);
        }

        cout << ans << endl;
    }
    return 0;
}