#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll n, a, b, p, q;
    // cin >> n >> a >> b >> p >> q; // 20 2 3 3 5

    // ll cnt1 = (n / a) * p, cnt2 = (n / b) * q, overlap = (n / lcm(a, b));
    // cout << cnt1 << " " << cnt2 << " " << overlap;
    // return 0;

    int a, b;
    cin >> a >> b;
    cout << (a / __gcd(a, b)) * b;
}