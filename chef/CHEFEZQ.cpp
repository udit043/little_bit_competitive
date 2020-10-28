#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int q[100001];
int main()
{
	int t, n, k, i, j;
	ll r, d;
	sd(t);
	while(t--)
	{
		r = d = 0;
		sd(n);	sd(k);
		for(i=0; i<n; i++)
		{
			sd(q[i]);
		}
		for(i=0; i<n; i++)
		{
			r += q[i];
			if(k > r)
			{
				d = i+1;
				break;
			}
			else
			{
				r = r-k;
			}
		}
		if(d == 0)
		{
			d = i+(r/k)+1;
		}
		cout << d << "\n";
	}
	return 0;
}

/*
2 
6 5 
10 5 5 3 2 1 
1 1
100

6
101
*/