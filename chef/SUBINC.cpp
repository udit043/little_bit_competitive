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
	long long int t;
	t = get_i();
	while(t--)
	{
		long long int n;
		n = get_i();
		long long int a[n],res=n;

		for(int i=0; i<n; i++ )
			a[i] = get_i();

		for(int i=0; i<n; i++)
		{
			//cout << "i " << i << "\n";
			long long int flag = 0;
			for(int j=i+1; j<n; j++, flag++)
			{
				if(a[j-1] <= a[j])
				{
					res = res + 1 + flag;
					i = j-1;
				}
				else
				{
					i = j-1;
					break;
				}
			}
		}
		printf("%lld\n",res);
	}
	return 0;
}

/*
13
1 2 3 4 5 6 1 7 8 9 10 11 12
5 + 4 + 3 + 2 + 1 + 6 + 5 + 4 + 3 + 2 + 1        + 13


18
1 2 3 4         1 2 3 4         1 2 3 4         1 2 3 4 5 6 
3 + 2 + 1 + 0 + 3 + 2 + 1 + 0 + 3 + 2 + 1 + 0 + 5 + 4 + 3 + 2 + 1 + 0    + 18 = 51 
*/