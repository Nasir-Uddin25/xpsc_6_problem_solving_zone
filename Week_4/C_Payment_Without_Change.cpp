#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--)
    {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        if (S % n <= b && a * n + b >= S)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}