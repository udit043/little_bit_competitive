#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	int t, n, i, j, k, p;
	string s;
	sd(t);
	while(t--)
	{
		sd(n);
		cin >> s;
		for(i=0; i<n; )
		{
			k=0;
			for(j=i, p=8; j<i+4; j++, p/=2)
			{
				if(s[j] == '1')
				{
					k = k + p;
				}
			}
			i=j;
			cout << ((char)(k+97)) ;
		}
		printf("\n");
	}
	return 0;
}

/*
3
4
0000
8
00001111
4
1001

a
ap
j
*/