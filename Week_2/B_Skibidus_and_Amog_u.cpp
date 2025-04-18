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
        string s;
        cin >> s;

        // for (int i = 0; i < s.size() - 2; i++)

        //     cout << s[i];
        // cout << 'i' << endl;

        cout << s.substr(0, s.size() - 2) + 'i' << endl;;
    }

    return 0;
}