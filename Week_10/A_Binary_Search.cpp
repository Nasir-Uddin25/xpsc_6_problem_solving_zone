#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (k--)
    {
        int search;
        cin >> search;

        bool ok = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (search == a[mid])
            {
                ok = true;
                break;
            }

            else if (search < a[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}