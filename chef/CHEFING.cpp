#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int a[26];
int main()
{
	int t, n, i, j, k, c;
	string s;
	sd(t);
	while(t--)
	{
		fill_n(a, 26, 0);
		c=0;
		sd(n);
		j=n;
		for(k=0; k<n; ++k)
		{
			cin >> s;
			for(i=0; i<s.length(); ++i)
			{
				if(a[(int)s[i]-97] == k)
					a[(int)s[i]-97]+=1;
			}
		}
		for(i=0; i<26; ++i)
			if(a[i] == j)
				++c;
		pd(c);
	}
	return 0;
}

/*
2
3
abcaa
bcbd
bgc
3
quick
brown
fox

2
0
*/