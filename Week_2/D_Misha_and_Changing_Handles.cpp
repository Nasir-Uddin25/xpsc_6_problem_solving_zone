#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, string> ans, has;

    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;

        if(has.find(a) != has.end())
        {
            string s = has[a];
           // cout << s << endl;
            ans[s] = b;
           // cout << ans[s] << endl;
           has.erase(a);
           has[b] = s;
           //cout << has[b] << endl;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
      
    }

    cout << ans.size() << endl;
    for (auto [x, y] : ans)
        cout << x << " " << y << endl;

    // ans
    // Misha ILoveCodeforces

    // has
    // ILoveCodeforces Misha
    return 0;
}