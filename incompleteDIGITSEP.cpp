#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		int m,x,y,ans=0,g=0,cd=0;
		cin >> m >> x >> y;

		for(int i=0; i<n; i++)
		{
			b[i] = a[i];
			for(int j=1; j<=m; j++)
			{
				cd = ( __gcd(b[i], b[i]+a[i+j])
				if( cd > g )
				{
					g = cd;
					b[i] = a[i+j];
					i = j;
				}
			}
		}
	}
	return 0;
}