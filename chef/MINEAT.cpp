// incomplete

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)
int a[mx];

int main()
{
	int t, n, i, f=0, sm; 	ll h;
	sd(t);
	while(t--)
	{
		sm=0;
		memset(a, 0, sizeof(a));
		sd(n); sll(h);

		for(i=0; i<n; ++i)
		{
			sd(a[i]);
			sm += a[i];
		}
		sort(a, a+n);
		if(h == n)
			cout << a[n-1] << "\n";
		else if(sm <= h)
			cout << "1\n";
		else
			if(sm%h != 0)
				cout << sm/h+1 << "\n";
			else
				cout << sm/h+1 << "\n";
	}
	return 0;
}

/*
3
3 3
1 2 3
3 4
1 2 3
4 5
4 3 2 7

3
2
4
*/