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
	t = get_i(); //cin >> t;
	while(t--)
	{
		long long int n;
		n = get_i();  //cin >> n;
		long long int c,mn=1000000;
		for(int i=0; i<n; i++)
		{
			c = get_i();  //cin >> c;
			mn=min(mn,c);
		}
		//sort(a,a+n);
		cout << mn*(n-1) << "\n"; //cout << a[0]*(n-1) << "\n";
	}
	return 0;
}