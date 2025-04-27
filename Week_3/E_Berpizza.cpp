#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, customerNo = 1;
    cin >> n;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        // 1 m  — a customer comes to Berpizza, and Polycarp estimates the amount of money that they will spend as m
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({customerNo, money});
            ml.insert({money, -customerNo});
            customerNo++;
        }
        // 2 — Monocarp serves a customer which came to the pizzeria first;
        else if (type == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});
        }
        // 3 — Polycarp serves a customer which is expected to spend the largest amount of money at the pizzeria (if there are several such customers, the one that came to the pizzeria first is chosen).
        else
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, money});
        }
    }

    for(auto val : ans)
        cout << val <<" ";
    // for (auto [x, y] : s)
    // {
    //     cout << x << "," << y << " ";
    // }
    // cout << endl;
    // for (auto [x, y] : ml)
    // {
    //     cout << x << "," << y << " ";
    // }
    return 0;
}