//  The best way to check the condition in the statement is to use bitmasks. Iterate from 0 to 2^n - 1 and for each number consider its binary representation. If the i-th bit of representation is set to 0. then decide to perform the i-th rotation clockwise. In the opposite case, do it counter clockwise. Finally, check if the whole angle is a multiple of 360 and if so, output  "YES". If no good combination of rotations was found. output "NO".

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // for (int i = 0; i < n; i++)
    //     cout << a[i] << endl;

    // cout << (1 << n) << endl;

    // for (int mask = 0; mask < (1 << n); mask++)      // decimal numbers means combination lock
    //     cout << mask << endl;

    bool ok = false;
    for (int mask = 0; mask < (1 << n); mask++) // 0 1 2 3 4 5 6 7
    {
        int sum = 0;
        for (int k = 0; k < n; k++) // 0 1 2
        {
            // cout << k << endl;

            // if ((mask >> k) & 1)
            //     cout << 1 << " ";
            // else
            //     cout << 0 << " ";

            // if ((mask >> k) & 1)
            //     cout << a[k] << " ";    //check which digit is ON

            if ((mask >> k) & 1)
            {
                sum += a[k]; // clockwise move
                // cout << 1 << " ";
            }

            else
            {
                sum -= a[k]; // clockwise move
                // cout << 0 << " ";
            }

            // 10 20 30
            // 0 0 0    -> -10-20-30 = -60
            // 1 0 0    -> 10-20-30  = -40
            // 0 1 0    -> -10+20-30 = -20
            // 1 1 0    -> 10+20-30  = 0
            // 0 0 1    -> -10-20+30 = 0
            // 1 0 1    -> 10-20+30  = 20
            // 0 1 1    -> -10+20+30 = 40
            // 1 1 1    -> 10+20+30  = 60
            // cout << ((mask >> k) & 1) << " ";
        }
        if (sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}