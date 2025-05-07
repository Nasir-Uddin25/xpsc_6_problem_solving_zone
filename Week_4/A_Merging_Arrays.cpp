#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int j = 0; j < m; j++)
        cin >> b[j];

    vector<int> v;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(b[j]);
            j++;
        }
    }

    while (i < n)
    {
        v.push_back(a[i]);
        i++;
    }

    while (j < m)
    {
        v.push_back(b[j]);
        j++;
    }

    for (auto val : v)
        cout << val << " ";
    cout << endl;
    return 0;
}