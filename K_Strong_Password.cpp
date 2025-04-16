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

        bool flag = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1] && !flag)
            {
                flag = true;
                cout << s[i];
                if (s[i] == 'z')
                    cout << 'a';
                else
                    cout << 'z';
            }
            else
            {
                cout << s[i];
            }
        }

        cout << s[s.size() - 1];
        if (!flag)
        {
            if (s[s.size() - 1] == 'd')
                cout << 'f';
            else
                cout << 'd';
        }
        cout << endl;
    }
    return 0;
}