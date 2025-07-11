#include <bits/stdc++.h>
using namespace std;

void generator_character()
{
    int n, m; // n ->the number of problem in the blank. m -> the number of upcoming rounds
    cin >> n >> m;

    vector<char> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i]; // the i-th problem has a difficulty level of ai.

    // In C++, std::map is an associative container that stores elements in key-value pairs, where each key is unique and the elements are stored in a sorted order based on their keys.
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[a[i]]++; // count the frequency of each character

    // for (auto val : mp) // range based for loop
    //     cout << val.first << " " << val.second << endl;     // val.first -> key and val.second -> value

    long long ans = 0;
    for (char ch = 'A'; ch <= 'G'; ch++)
    {
        if (mp[ch] < m)
            ans +=  (m - mp[ch]);
    }

     cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        generator_character();
    return 0;
}