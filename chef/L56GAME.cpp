#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
int a[101];
int main()
{
	int t, n, i, j, e, o;
	sd(t);
	while(t--)
	{
		e=o=0;
		sd(n);
		for(i=0; i<n; i++)
			sd(a[i]);
		for(i=0; i<n; i++)
		{
			if(a[i] & 1)
				o++;
			else
				e++;
		}
		e = e + o/2;
		o = o%2;
		if(e >= 1)
			e = 1;
		cout << (e+o) << "\n";
	}
	return 0;
}

/*
2
2
1 2
5
7 4 3 2 6

2
1
*/