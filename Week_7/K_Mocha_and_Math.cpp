#include <bits/stdc++.h>
using namespace std;

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
        vector<int> a(n);
        for (int i = 1; i <= n; i++)
                cin >> a[i];

        int res = a[1];
        for (int i = 2; i <= n; i++)
            res &= a[i];

        cout << res << endl;
    }
    return 0;
}