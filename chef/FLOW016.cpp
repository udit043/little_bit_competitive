#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,res;
        cin >> a >> b;
        res = __gcd(a,b);
        cout << res << " " << a*b/res << "\n";
    }
    return 0;
}