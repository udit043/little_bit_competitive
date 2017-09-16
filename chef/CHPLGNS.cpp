#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define inf 99999999
#define sll(x) scanf("%lld", &x)

bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		vector < pair <ll, ll> > v;
		ll m, n, i, j, a, b, k;

		sll(m);
		for(j=0; j<m; ++j)
		{
			k = -inf;
			sll(n);
			for(i=0; i<n; ++i)
			{
				sll(a);
				sll(b);
				k = max(k, a);	
			}
			v.push_back(make_pair(k,j));
		}
		
		sort(v.begin(), v.end());
		for(i=0; i<m; ++i)
		{
			v[i].first = i;
		}
		sort(v.begin(), v.end(), sortbysec);
		for(i=0; i<m; ++i)
		{
			cout << v[i].first << " ";
		}
		printf("\n");
		v.clear();
	}
	return 0;
}

/*
1
3
6
-2 2 -1 1 2 2 2 -1 1 -2 -2 -2
3
-1 -1 1 -1 1 1
4
3 3 -3 3 -3 -3 3 -3

1 0 2
*/