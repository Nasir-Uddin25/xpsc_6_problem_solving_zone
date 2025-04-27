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
        long long int n;
        cin >> n;

        int ans = 1;
        while (n > 3)
        {

            n = n / 4;
            ans *= 2;
        }

        cout << ans << endl;
    }
    return 0;
}