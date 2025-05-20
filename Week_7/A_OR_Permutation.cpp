// well it is pretty straight forward that if x,y,z are positive integers such that z=x|y then z>=max(x,y) therefore if we print numbers in decreasing order then there's no way our permutation can be wrong hence it's the answer

// in this question we simply reversed the numbers and printed them since or of any two numbers greater then the next smaller number will always be greater then that. Thank you :
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
        int n;
        cin >> n;
        for (int i = n; i >=1; i--)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}