#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());
        for (int i = 1; i <= 5; i++)
        {
            if (v[0] < v[1])
                v[0]++;
            else if (v[1] < v[2])
                v[1]++;
            else
                v[2]++;

            sort(v.begin(), v.end());
        }

        cout << v[0] * v[1] * v[2] << endl;
    }

    return 0;
}