#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string str;
        cin >> n >> str;

        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(str[i]);
        }
        sort(v.begin(), v.end());
        v.resize(unique(v.begin(), v.end()) - v.begin());
        int m = v.size();

        for (int i = 0; i < n; i++)
        {
            int idx = lower_bound(v.begin(), v.end(), str[i]) - v.begin();
            str[i] = v[m - 1 - idx];
        }
        cout << str << "\n";
    }

    return 0;
}