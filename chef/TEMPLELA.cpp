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
	int strip;
	strip = get_i();
	while(strip--)
	{
		int n,i,f=0;
		n = get_i();
		int a[n];
		for(i=0; i<n; ++i)
			a[i] = get_i();
		if( (n&1) && (a[0] == 1) && (a[n-1] == 1) )
		{
			f=1;
			for(i=0; i<n/2; ++i)
			{
				if(a[i+1] - a[i] != 1)
				{
					f=0;
					break;
				}
			}
			for(i=n/2; i<n-1; ++i)
			{
				if(a[i] - a[i+1] != 1)
				{
					f=0;
					break;
				}
			}
		}
		if(f&1)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}

/*
7
5
1 2 3 2 1
7
2 3 4 5 4 3 2
5
1 2 3 4 3
5
1 3 5 3 1
7
1 2 3 4 3 2 1
4
1 2 3 2
4
1 2 2 1

*/