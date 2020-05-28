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
	ll t, n, q, c, i, j, ans, a[26];
	string s;
	sll(t);
	while(t--)
	{
		fill_n(a, 26, 0);
		sll(n);	sll(q);
		cin >> s;
		for(j=0; j<n; j++)
		{
			a[((int)s[j]-97)]++;
		}
		for(i=0; i<q; i++)
		{
			ans = 0;
			sll(c);
			for(j=0; j<26; j++)
			{
				if(a[j] > c)
				{
					ans += (a[j]-c);
				}
			}
			cout << ans << "\n";
		}
	}
	return 0;
}

/*
1
20 2
stayinghomesaveslife
1
3

6
0
*/