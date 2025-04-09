#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int SerejaScore = 0, DimaScore = 0, moves = 1;

    while (!v.empty())
    {
        int left = v.front() , right = v.back(), mx;
        mx = max(left, right);

        if (moves % 2 != 0)
        {
            SerejaScore += mx;
        }
         else
        {
            DimaScore += mx;
        }

        if (mx == left)
        {
            v.erase(v.begin());
        }
        else
        {
            v.pop_back();
        }

        moves++;
    }

    cout << SerejaScore << " " << DimaScore;
    return 0;
}