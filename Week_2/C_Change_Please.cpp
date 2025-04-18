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
        int fare;
        cin >> fare;

      int  driver_pay = 100 - fare;

        
        cout << (driver_pay /10 )*10 << endl;
    }
    return 0;
}