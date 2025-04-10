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

        int n = s.size();

        vector<int> upper, lower;
        vector<bool> ok(n + 2, true);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {

                if (!lower.empty())
                {
                    ok[lower.back()] = false;
                    lower.pop_back();
                }
                ok[i] = false;
            }

            else if (s[i] == 'B')
            {
                if (!upper.empty())
                {
                    ok[upper.back()] = false;
                    upper.pop_back();
                }
                ok[i] = false;
            }

            else if (s[i] >= 'A' && s[i] <= 'Z')
                upper.push_back(i);
            else
                lower.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            if (ok[i])
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
