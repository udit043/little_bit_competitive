#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,k,i,mx=0;
		cin >> n >> k;
		for(i=k; k>=2; --k)
		{
			mx = max(mx,n%k);
		}
		cout << mx << "\n";
	}
	return 0;
}