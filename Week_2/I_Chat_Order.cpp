#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> v[i];
    }

    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s = v[i];
        mp[s]++;

    }

    for (int i = 0; i < n; i++)
    {
        string s = v[i];
        if (mp[s] > 0)
        {
            cout << s << endl;
            mp[s] = 0;
        }
    }
    return 0;
}