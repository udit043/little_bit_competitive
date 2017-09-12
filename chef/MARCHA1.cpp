#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

ll a[mx], sm, m;

void subset_int(ll aa[], ll n)
{
	bool flag;
	for(ll i=0; i < (1 << n); ++i)
	{
		sm = 0;
		flag = false;
		for(ll j=0; j < n; ++j)
		{
			if( i & (1 << j) )
			{
				//cout << aa[j] << " ";
				sm += aa[j];
			}
			if(sm == m)
			{
				flag = true;
				break;
			}
			else if(sm > m)
				break;
		}
		if(flag == true)
		{
			printf("Yes\n");
			return ;
		}
		//cout << "\n";
	}
	if(flag == false)
		printf("No\n");
}

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		memset(a, 0, sizeof(a));
		ll n, i, j, k;
		sll(n); sll(m);
		for(i=0; i<n; ++i)
			sll(a[i]);
		subset_int(a,n);
	}
	return 0;
}

/*
5
3 3
1
1
1
5 11
1
2
4
8
16
5 23
1
2
4
8
16
5 13
1
5
5
10
10
20 132
17
6
4
998
254
137
259
153
154
3
28
19
123
542
857
23
687
35
99
999

Yes
Yes
Yes
No
Yes
*/