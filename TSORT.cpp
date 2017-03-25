#include <bits/stdc++.h>
using namespace std;

static long int get_i()
{
	char c=getchar_unlocked();
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
	long long int n,i;
	n = get_i();
	long long int a[n];
	for(i=0; i<n; i++)
		a[i] = get_i();
	sort(a,a+n);
	for(i=0; i<n; i++)
		cout << a[i] << "\n";
	return 0;
}

/*
5
5
3
6
7
1

*/