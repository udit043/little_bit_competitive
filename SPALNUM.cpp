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
		long long int l,r,sum=0;
		l = get_i();
		r = get_i();

		for(int i=l; i<=r; i++)
		{
			long int rev=0,n=i;
			while(n>0)
			{
				rev = rev*10 + n%10;
				n = n/10;
			}
			if(rev == i)
			{
				sum += rev;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}