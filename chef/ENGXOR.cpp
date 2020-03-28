#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

ll a[mx];
int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int t;
	ll n, q, p, i, e, o;
	cin >> t;//sd(t);
	while(t--)
	{
		cin >> n >> q;//sll(n);	sll(q);
		for(i=0; i<n; i++)
			cin >> a[i];//sll(a[i]);
		while(q--)
		{
			cin >> p;//sll(p);
			e=o=0;
			for(i=0; i<n; i++)
			{
				//a[i] = a[i] ^ p;
				if(__builtin_popcount((a[i]^p)) & 1)
					o++;
				else
					e++;
				//a[i] = a[i] ^ p;
			}
			cout << e << " " << o << "\n";//printf("%lld %lld\n", e, o);
		}
	}
	return 0;
}

/*
1
6 1
4 2 15 9 8 8
3

2 4
*/