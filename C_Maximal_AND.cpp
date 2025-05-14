#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int maxSetBit = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxSetBit = max(maxSetBit, __lg(a[i]));
    }
    // cout << maxSetBit << endl;

    //     16 8 4 2 1
    // 4 -> 0 0 1 0 0
    // 6 -> 0 0 1 1 0
    // 6 -> 0 0 1 1 0
    // 28 ->1 1 1 0 0
    // 6 -> 0 0 1 1 0
    // 6 -> 0 0 1 1 0
    // 12 ->0 1 1 0 0

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " -> ";
        for (int k = maxSetBit; k >= 0; k--)
        {
            if ((a[i] >> k) & 1)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}