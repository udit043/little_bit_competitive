#include <iostream>
#include <cstdio>
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
		long long int n,i,b,res=0;;
		n = get_i();
		for(i=0; i<n; i++)
		{
			b = get_i();
			res ^= b;
		}
		cout << res << "\n";
	}
	return 0;
}