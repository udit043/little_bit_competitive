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
		long long int d,n,res=0;
		d = get_i();
		n = get_i();

		res = (n*(n+1)) / 2 ;
		while(--d)
		{
			res = (res*(res+1)) / 2;
		}
		cout << res << "\n";
	}
	return 0;
}