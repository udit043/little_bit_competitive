#include <bits/stdc++.h>
#include <iomanip>
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
		long long int n,k;
		long double res = 0;
		n = get_i();
		k = get_i();
		long long int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		sort(a,a+n);

		for(int i=k; i<(n-k); i++)
		{
			res += a[i];
		}
		res = res / (n-k-k); // 1
		cout << fixed << setprecision(6);
		cout << res << "\n"; // 1.000000
	}
	return 0;
}