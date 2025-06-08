#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i]; // 1 2 3 4 5

        ll G1 = 0, G2 = 0;
        for (int i = 0; i < n; i += 2) // 0 2 4
        {
            G1 = __gcd(G1, a[i]); // gcd(0,1), gcd(1,3), gcd(1,5)
            // cout << G1 << endl;   // 1 1 1
        }

        for (int i = 1; i < n; i += 2) // 1 3 5
        {
            G2 = __gcd(G2, a[i]); // gcd(0,2), gcd(2,4)
            //cout << G2 << endl;   // 2 2
        }

        // cout << G2 << endl;

        ll ans = 0;
        bool ok = true;
        for (int i = 1; i < n; i += 2) // 2 4
        {
            if (a[i] % G1 == 0) // (2%1) (4%1)
                ok = false;
        }

        if (ok)
        {
            ans = G1;
        }
        else
        {
            ok = true;
            for (int i = 0; i < n; i += 2) // 1 3 5
            {
                if (a[i] % G2 == 0) // (2%2) (4%2)
                {
                    ok = false;
                }
            }

            if (ok)
            {
                ans = G2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}