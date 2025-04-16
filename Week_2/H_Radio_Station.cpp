#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; // n is the number of strings, m is the number of queries
    cin >> n >> m;

    // Map to store string (name) and corresponding IP
    map<string, string> mp;

    // Input the name and IP pairs
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name; // Map IP to name
    }

    // Process the queries
    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;

        // Remove the trailing semicolon from the IP
        ip.pop_back();

        // Output the command, IP, and the corresponding name
        cout << command << " " << ip << "; #" << mp[ip] << endl;
    }

    return 0;
}