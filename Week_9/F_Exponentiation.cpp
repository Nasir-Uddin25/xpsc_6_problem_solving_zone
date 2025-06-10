#include <bits/stdc++.h>
using namespace std;
#define ll long long
// MOD is a constant integer set to the value 1000000007, commonly used in competitive programming and algorithm design as a modulus for operations to prevent integer overflow and ensure results fit within standard data types. It is defined using scientific notation (1e9 + 7) for readability.
const int MOD = 1e9 + 7;

// The power function is declared to take two integer parameters, x and n, and return an integer. However, its definition is currently empty, meaning it does not perform any operations or calculations.
int power(int x, int n)
{
    int ans = 1 % MOD;
    while (n)
    {

        if (n & 1)
            // cout << 1 << " ";
            ans = (1ll * ans % MOD * x % MOD) % MOD;
        // else
        //     cout << 0 << " ";

        x = 1ll * x * x % MOD;
        n >>= 1;
        // n/=2;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        cout << power(x, n) << endl;
    }

    return 0;
}
