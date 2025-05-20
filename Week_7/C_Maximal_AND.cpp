#include <bits/stdc++.h>
using namespace std;

const int B = 30;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, K;
        cin >> n >> K;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        //     16 8 4 2 1
        // 4 -> 0 0 1 0 0
        // 6 -> 0 0 1 1 0
        // 6 -> 0 0 1 1 0
        // 28 ->1 1 1 0 0
        // 6 -> 0 0 1 1 0
        // 6 -> 0 0 1 1 0
        // 12 ->0 1 1 0 0

        vector<int> bits(B + 1);
        // cout << __lg(AND) << endl;
        // for (int k = __lg(AND); k >= 0; k--)
        // {
        //     if ((AND >> k) & 1)
        //         cout << 1 << " ";
        //     else
        //         cout << 0 << " ";
        // }

        for (int i = 0; i < n; i++)
        {
            for (int k = B; k >= 0; k--)
            {
                if ((a[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }

        int ans = 0;
        for (int k = B; k >= 0; k--)
        {
            if (bits[k] == n)
                ans += (1LL << k);
            else
            {
                int need = n - bits[k];
                if (K >= need)
                {
                    ans += (1LL << k);
                    K -= need;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}