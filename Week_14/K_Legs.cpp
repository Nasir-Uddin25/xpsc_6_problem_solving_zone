#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << (n + 2) / 4 << endl;
        // there are minimum legs of all animals
        // a chicken - 2 legs
        // a cows - 4 legs
        // four cows - 16 legs
        // two cows + one chicken - 10 legs
    }
    return 0;
}