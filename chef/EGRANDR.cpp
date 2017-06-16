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
	t=get_i();
	while(t--)
	{
		int n,i,fail=1,full=0;

		long double sum=0,avg=0;

		cin >> n;
		int a[n];
		for(i=0; i<n; i++)
		{
			a[i]=get_i();

			if(a[i] <= 2)
				fail=0;
			if(a[i] == 5)
				full=1;
			sum += a[i];
		}
		avg = sum / n;
		if( (avg >= 4.0) && (fail == 1) && (full != 0) )
			cout << "Yes\n";
		else
		cout << "No\n";
	}
	return 0;
}