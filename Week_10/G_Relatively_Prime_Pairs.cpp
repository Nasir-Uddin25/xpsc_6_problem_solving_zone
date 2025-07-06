#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l, r;
    cin >> l >> r;

    // cout << r - l << endl;
    // cout << (r - l + 1) / 2 << endl;

    cout << "YES" << endl;
    for (long long i = l; i < r + 1; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
    return 0;
}