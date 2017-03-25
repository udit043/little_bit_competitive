//bht dimag kharab hua ispr + bike ka tyre puncture hai
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned int t;
	cin >> t;
	while(t--)
	{
		long long int n,res=0,mx=0;
		cin >> n;
		string sa,sc;

		long long int w[n+1];

		cin >> sa >> sc;

		for(int i=0; i<=n; i++)
			cin >> w[i];

		mx = max(mx,w[res]);
		for(int i=0; i<n; i++)
		{
			if((sa[i] == sc[i]))
			{
				res += 1;
			}
			mx = max(mx,w[res]);
		}
		if(res == n)
			mx = w[n];
		cout << mx << "\n";
	}
	return 0;
}