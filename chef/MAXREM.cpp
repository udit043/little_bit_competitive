#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	int n, i, j, e1, e2, o1, o2, a[mx];
	sd(n);
	for(i=0; i<n; i++)
	{
		sd(a[i]);
	}
	sort(a, a+n, greater<int>());
	unique(a, a+n);

	cout << a[1]%a[0] << "\n";

	return 0;
}

/*
6  
5 5 5 2 3 8

5
*/