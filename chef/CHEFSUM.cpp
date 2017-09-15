#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ll long long
#define mx 1000007

ll a[mx];
ll sf[mx];
ll pf[mx];

int main()
{
	ios_base::sync_with_stdio(false);  //0.07
	cin.tie(NULL);

	int t;
	cin >> t;  //scanf("%d",&t); 0.09
	while(t--)
	{
		memset(a , 0, sizeof (a ));
		memset(sf, 0, sizeof (sf));
		memset(pf, 0, sizeof (pf));

		ll n,i,k=LLONG_MAX,idx=LLONG_MAX,j;
		cin >> n;
		for(i=0; i<n; ++i)
		{
			cin >> a[i];
			pf[i+1] = pf[i]+a[i];	//prefix
		}

		for(i=n; i>0; --i)
		{
			sf[i] = sf[i+1]+a[i-1];		//suffix
		}

		for(i=1; i<=n; ++i)
		{
			j = pf[i]+sf[i];
			if(j < k)
			{
				k = j;
				idx = i;
			}
		}
		if(n == 1)
			printf("1\n");
		else
			printf("%lld\n",idx );
	}
	return 0;
}

/*
2
3
1 2 3
4
2 1 3 1

1
2
*/