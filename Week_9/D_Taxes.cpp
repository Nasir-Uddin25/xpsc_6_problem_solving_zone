#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (isPrime(n))
        // prime -> 1 doler pay
        cout << 1 << endl;
    else if (n % 2 == 0)
        // even -> 2 dolar pay
        cout << 2 << endl;
    else
    {
        // odd -> (n-2) is two number prime . then , 2 dolar pay
        if (isPrime(n - 2))
            cout << 2 << endl;
        else
            // one number is prime and another number is even. two prime number is added even number
            cout << 3 << endl;
    }
    return 0;
}