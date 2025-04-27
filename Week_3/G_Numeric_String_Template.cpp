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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            // 1st condition : The length of the string s is equal to the number of elements in the array
            if (s.size() != n)
            {
                cout << "NO" << "\n";
                continue;
            }

            // 2nd condition : The same numbers from a corresponds to the same symbols from s. if ai = aj, then si= sj
            map<char, vector<int>> mp;
            for (int i = 0; i < s.size(); i++)
            {
                mp[s[i]].push_back(i);
            }

            bool ok = true;
            for (auto [x, y] : mp)
            {
                for (int j = 0; j < y.size() - 1; j++)
                {
                    if (a[y[j]] != a[y[j + 1]])
                        ok = false;
                }
            }

            if (!ok)
            {
                cout << "NO" << "\n";
                continue;
            }

            // Third conditon
            map<int, vector<int>> mp1;
            for (int i = 0; i < n; i++)
                mp1[a[i]].push_back(i);

            for (auto [x, y] : mp1)
            {
                for (int j = 0; j < y.size() - 1; j++)
                {
                    if (s[y[j]] != s[y[j + 1]])
                        ok = false;
                }
            }
            if (!ok)
                cout << "NO" << "\n";
            else
                cout << "YES" << "\n";
        }
    }
    return 0;
}