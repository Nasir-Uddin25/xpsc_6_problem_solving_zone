// If the string s
//  consists entirely of 0
// , then obviously no other string can be obtained from it, so the answer is "Yes" only if s=t
// .

// Otherwise, let i
//  — the index of the first 1
//  in s
// . Note that if there is at least one 1
//  in t
//  at positions [1;i)
// , then the answer is "No", since s
//  has 0
//  at these positions, so some of them must be changed to 1
// . However, when applying the operation the first 1
//  from position i
//  can change bits only at positions greater than or equal to i
// , i.e. it will not be possible to change 0
//  at positions before i
// .

// If there is only 0
//  at positions [1;i)
//  in t
// , then it is possible to change any bit on the segment [i;n]
//  in s
//  to any other bit by choosing segments of length i
//  and acting from the end, i.e. the answer is "Yes"

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.size() && s[i] == '0'; ++i)
    {
        if (t[i] != '0')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}

/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        if (s == t)
        {
            cout << "YES" << endl;
            continue;
        }


        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (pos > i)
                        ok = false;
                    break;
                }
            }
            if (ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
} */