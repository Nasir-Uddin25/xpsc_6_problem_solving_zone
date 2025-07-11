// https://codeforces.com/problemset/problem/1941/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // n and m the numbber of coins in the left and right pocket
        //  k the maximum sum of two coins for the ticket payment at the counter respectively
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> b(n), c(m);
        for (int i = 0; i < n; i++)
            cin >> b[i]; // n integers b[i] the denominations of coins in the left pocket

        for (int j = 0; j < m; j++)
            cin >> c[j]; // m integers c[j] the denominations of coins in the right pocket

        // there are to select indics f and s such that b[f] + c[s] <= k
        // For each test case, we calculate all elements b[i] from the first array. we iterate through the array and in a loop, we calculate each sum b[i]+ c[j]. If this sum is less than or equal to k, we add 1 to the answer.

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                ans += (b[i] + c[j]) <= k;
        }

           cout << ans << endl;
    }
    return 0;
}