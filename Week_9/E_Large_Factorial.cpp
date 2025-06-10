#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Modular Multiplication
    //(a*b) %MOD
    //(a%MOD * b %MOD) %MOD

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
            ans = (1ll * ans % MOD * i % MOD) % MOD; // ans = 1*2*3*4*5

        cout << ans << endl;
    }

    // ans = 1
    // ans = (1%MOD * 2%MOD)
    // ans = (2%MOD * 3%MOD)
    // ans = (6%MOD * 4%MOD)
    // ans = (24%MOD * 5%MOD)
    // ans = (120%MOD * 6%MOD)
    return 0;
}