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
		int i,n;
		string s;

		n = get_i();
		cin >> s;

		int a[n];
		for(i=0; i<n; i++)
		{
			a[i] = get_i();
		}
		if( (n == 1) && (s[1] == 'e') && (a[0] % 2 == 0) )
			cout << "Dee\n";
		else
			cout << "Dum\n";
	}
	return 0;
}