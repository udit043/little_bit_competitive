// wrong incomplete

#include <bits/stdc++.h>
using namespace std;
long long int a[100002];
int main()
{
	int t;
	scanf("%d", &t);
	while(--t+1)
	{
		long long int n,i,c,mx=0;
		scanf("%lld", &n);
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}

		for(i=0; i<n; i++)
		{
			c=0;
			while(a[i]%2 == 0)
			{
				++c;
				a[i] /= 2;
			}
			c += 1;
			if(c != i)
				a[c] += 1;
			mx = max(c,mx);
		}
		mx = max(mx, n);
//		cout << "mx=" << mx << "\n";
		c=0;
		for(i=0; i<=mx; i++)
			c += a[i];

		cout << c << "\n";
	}
	return 0;
}