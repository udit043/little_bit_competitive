#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)
//fill_n(a, 102, mx);

int pg[100001], cp[100001];

int main()
{
	int t, x, y, k, n, i, j, b;
	sd(t);
	while(t--)
	{
		b=0;
		vector< pair <ll,ll> > vect;
		sd(x);	sd(y);	sd(k);	sd(n);
		for(i=0; i<n; i++)
		{
			sd(pg[i]);	sd(cp[i]);
			vect.push_back(make_pair(cp[i], pg[i]));
		}
		sort(vect.begin(), vect.end());
		for(i=0; i<n; i++)
		{
			if(b == 1)
			{
				break;
			}
			if((vect[i].first <= k) && (vect[i].second >= (x-y)))
			{
				printf("LuckyChef\n");
				b=1;
			}
		}
		if(b == 0)
			printf("UnluckyChef\n");
	}
	return 0;
}

/*
3
3 1 2 2
3 4
2 2    
3 1 2 2
2 3
2 3    
3 1 2 2
1 1
1 2

LuckyChef
UnluckyChef
UnluckyChef
*/