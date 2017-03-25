//editorial padha.. 20dec 12:24am
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
		long long int i,n,k,res=0,sub,add;
		n = get_i();
		k = get_i();

		long long int a[n];
		for(i=0; i<n; i++)
		{
			cin >> a[i];
			sub = a[i] % k;
			add = k - sub;

			if(a[i] >= k)
				res = res + min(sub, add);
			else
				res = res + add;
		}
		cout << res << "\n";
	}
	return 0;
}