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
        int n, k;
        cin >> n >> k;

        // key -> stations and value -> indices
        // characteristics of set 1. sorted 2. unique
        // characteristics of map 1. key values are used to sort
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int station;
            cin >> station;
            mp[station].insert(i); // 3 station -> 1 indices
        }

        // for(auto [x,y] : mp)
        // {
        //     cout << x <<" -> ";
        //     for(auto idx : y)
        //         cout << idx << " ";
        //     cout << endl;
        // }

        while (k--)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
                cout << "NO" << endl;
            else
            {
                int startingStationLeftMostIndex, endingStationRightMostIndex;
                startingStationLeftMostIndex = *mp[l].begin();
                endingStationRightMostIndex = *mp[r].rbegin();
                if (startingStationLeftMostIndex < endingStationRightMostIndex)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}

// stations    indices
// 3        -> 1
// 7        -> 2
// 1        -> 3,5
// 5        -> 4
// 4        -> 6