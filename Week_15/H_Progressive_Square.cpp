#include <bits/stdc++.h>
using namespace std;
#define ll long long

void progressive_square()
{
    // your are given c and d number . You have to add c number column line and d number row line
    ll n, c, d;
    cin >> n >> c >> d;

    // I have taken n square numbers
    vector<ll> a(n * n);
    for (auto &e : a)
        cin >> e;

    int x = *min_element(a.begin(), a.end()); // This algorithm gives the minimum element from the array which is located the top left most index in the array

    // A progressive square of size n, a matrix n * n size
    // A progressive square matrix constructs the following rules :
    // i) a[i+1][j] = a[i][j] + c
    // ii) a[i][j+1] = a[i][j] + d
    vector<vector<ll>> tmp(n, vector<ll>(n));

    tmp[0][0] = x; // The first value x in the array

    // column
    for (int j = 0; j < n - 1; j++)
        tmp[0][j + 1] = tmp[0][j] + d;

    // row
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
            tmp[i + 1][j] = tmp[i][j] + c;
    }

    // The second array is that I would have stored the element from a array . As, I will check a array with b array

    vector<ll> b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            b.push_back(tmp[i][j]);
    }

    // for (auto val : b)
    //     cout << val << " ";
    // cout << endl;

    sort(a.begin(), a.end()); // 0(nlogn)
    sort(b.begin(), b.end()); // 0(nlogn)

    if (a == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        progressive_square();
    return 0;
}