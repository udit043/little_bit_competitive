#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,res=0;
		cin >> n;
		while(n != 0)
		{
			res = res + n%10;
			n = n/10;
		}
		cout << res << "\n";
	}
	return 0;
}