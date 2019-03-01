#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int p[102], b[102], a[102];
int main()
{
	fill_n(a, 102, -1);
	int n, m, i, sum=0;

	sd(n);	sd(m);
	for(i=0; i<n; i++)
	{
		sd(p[i]);	sd(b[i]);
		a[b[i]] = max(a[b[i]], p[i]);
	}

	sort(a, a+102, greater<int>());
	for(i=0; i<n; i++)
	{
		if(a[i] != -1)
			sum += a[i];
	}

	pd(sum);
	return 0;
}

/*
5 6
3 1
4 2
1 1
2 3
1 6

10
*/