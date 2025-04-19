#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a.begin(), a.end()); // 0(nlogn)
    int pos = 1;

    for (int i = 1; i <= n; i++) //0(logn)
    {
        if (a[i] >= pos)
            pos++;
       
    }
     
    cout << pos - 1 << endl;
    return 0;
}