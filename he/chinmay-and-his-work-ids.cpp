#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int a[mx], b[mx];

int main()
{
	set <int> set;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	int n,m,i,c=0,j=0;
	sd(n);
	for(i=0; i<n; ++i)
	{
		sd(a[i]);
	}
	sort(a, a+n);
	sd(m);
	for(i=m; i<n; ++i)
		set.insert(a[i]);
	cout << abs(set.size()) << "\n";
	return 0;
}

/*
6
2 1 2 3 3 3
3

1
*/

/*
	for(i=m-1; i<n; ++i)
	{
		b[j] = a[i];
		++j;
	}
	sort(b, b+j);
	for(i=1; i<j; ++i)
	{
		if(b[i] != b[i-1])
			++c;
	}
	printf("%d\n", c);
*/