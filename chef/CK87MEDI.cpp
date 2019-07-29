#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int a[201];

int main()
{
	fill_n(a, 201, 9); 
	int t, k, n, i, j;
	sd(t);
	while(t--)
	{
		sd(k);	sd(n);
		for(i=0; i<k; i++)
			sd(a[i]);
		sort(a, a+k);
		cout << a[(n+k)/2] << "\n";
	}
	return 0;
}

/*
3
2 1
4 7
4 3
9 2 8 6
5 2
6 1 1 1 1

7
9
1
*/