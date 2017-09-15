#include <bits/stdc++.h>
using namespace std;

unsigned long long int f[40];
int c = 1;
int main()
{
	f[0]=f[1]=1;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		if( n == 0 )
			printf("1\n");
		else
		{
			if( c < n )
			{
				for(unsigned long long int i=c; i<= n; i++)
				{
					f[i] = f[i-1]*i;
				}
			}
			c=n;
		}
		cout << f[n] << "\n";
	}
	return 0;
}