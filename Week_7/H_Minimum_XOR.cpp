#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum ^= a[i];
        }

        int ans = sum;
        for(int i=0; i<n; i++)
        {
            int temp = sum ^ a[i];
            ans = min(ans, temp);
        }

        cout << ans << endl;
    }
    return 0;
}