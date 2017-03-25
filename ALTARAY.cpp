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
		long long int n,i,j;
		n = get_i();

		long long int a[n],res[n],sign[n];

		for(i=0; i<n; i++)
		{
			cin >> a[i];

			if(a[i] > 0)
				sign[i] = 1;
			else
				sign[i] = -1;
		}

		for(i=0; i<n; i++)
		{
			res[i] = 1;
			for(j=i+1; j<n; j++)
			{
				if(sign[j-1] != sign[j])
				{
					res[i] += 1;
				}
				else
				{
					break;
				}
			}
			for(int y=i+1; y<j; y++)
				res[y] = res[y-1]-1;
			i = j-1;
		}

		for(i=0; i<n; i++)
			cout << res[i] << " ";
		cout << "\n";
	}
	return 0;
}