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
	//std::ios_base::sync_with_stdio(false); 0.24
	int t;
	t = get_i();
	while(t--)
	{
		long long int n,i;
		n = get_i();
		long long int a[n];
		for(i=0; i<n; i++)
		{
			a[i] = get_i();
		}
		sort(a,a+n);
		cout << a[0]+a[1] << "\n";
	}
	return 0;
}