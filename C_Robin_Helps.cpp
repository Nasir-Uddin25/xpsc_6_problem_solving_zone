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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int gold = 0, cnt = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i] >= k)
            {
                gold += a[i];
                continue;
            }
            if(a[i] == 0 && gold >0)
            {
                gold--;
                cnt++;
            }
        }
       
        cout << cnt << endl;
      
       
    }
    return 0;
}