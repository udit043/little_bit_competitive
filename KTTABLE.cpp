#include <bits/stdc++.h>
using namespace std;

static long int get_i()
{
	char c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar();
	}
	return ret;
}

int main()
{
	int t;
	t = get_i();
	while(t--)
	{
		int n;
		n = get_i();
		long long int a[n],b[n],res=0;
		for(int i=0; i<n; i++)
			a[i] = get_i();
		for(int i=0; i<n; i++)
		{
			b[i] = get_i();
			if( i == 0 )
			{
				if( b[i] <= a[i])
					res += 1;
			}
			else if(b[i] <= (a[i]-a[i-1]))
				res += 1;
		}
		cout << res << "\n";
	}
	return 0;
}