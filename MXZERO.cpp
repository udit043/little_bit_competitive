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
		int n,i,z=0,o=0;
		n = get_i();
		long long int a[n];

		for(i=0; i<n; i++)
		{
			a[i] = get_i();

			if(a[i] == 1)
				o++;
			else
				z++;
		}

		if ( o % 2 == 0 )
			cout << z << "\n";
		if ( o % 2 == 1 )
			cout << o << "\n";
	}
	return 0;
}