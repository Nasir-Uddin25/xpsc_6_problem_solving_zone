// just made the set which will count the index in which the 1 has appear like if 01 ,10 and 11 we can see that 1 is appeaeed at 0 and 1 and in 11 we can see that 1 has been appeared at position 0 and 1 but it is already included in set so ignore. then if the size matches with the k then print yes

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s[n];
        set<long long> st1;
        for (long long i = 0; i < n; i++)
        {
            cin >> s[i];

            long long x = 0, pos1;
            for (long long j = 0; j < k; j++)
            {
                if (s[i][j] == '1')
                {
                    x++;
                    pos1 = j;
                }
            }
            if (x == 1)
            {
                st1.insert(pos1);
            }
        }
        if (st1.size() == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}