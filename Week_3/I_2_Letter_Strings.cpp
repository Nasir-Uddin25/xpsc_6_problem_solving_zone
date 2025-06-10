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

        map<char, int> f_occ;
        
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f_occ[a[i][0]]++;
        }

        for (auto val : f_occ)
            cout << val.first << " " << val.second << endl;
    }
    return 0;
}