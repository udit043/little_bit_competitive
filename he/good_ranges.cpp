#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll x[mx];
int main()
{
	ll n, m, X, a, b, i, j, sum, cnt=1;
	sll(n);	sll(m);
	x[0]=1;
	while(m--)
	{
		sum = 0;
		sll(X);
		x[cnt] = X;
		x[cnt+1] = n;
		sort(x, x+cnt+1);
		for(i=1; i<=cnt; i++)
		{
			if(x[i] != x[i-1])
			{
				a = x[i-1] + 1;
				b = x[i+1] - 1;
				sum = sum + a + b;
			}
		}
		cout << sum << "\n";
		cnt++;
	}	
	return 0;
}

/*
10 10
2 
7
5
9
6
1
8
10
3
4

11
20
30
46
58
61
77
96
102
110
*/