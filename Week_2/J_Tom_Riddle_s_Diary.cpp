#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> seen; // Use a set to track seen strings

    while (n--) {
        string s;
        cin >> s;

        // Check if the string has been seen before
        if (seen.count(s)) {
            cout << "YES" << endl; // Already seen
        } else {
            cout << "NO" << endl; // First time seeing this string
            seen.insert(s); // Mark the string as seen
        }

        
    }

    return 0;
}