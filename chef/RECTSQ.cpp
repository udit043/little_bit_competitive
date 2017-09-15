#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int m,n,gd,res=0;
		cin >> m >> n;
		gd = __gcd(m,n);
		res = (m*n)/(gd*gd);
		cout << res << "\n";
	}
	return 0;
}