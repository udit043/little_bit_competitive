#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int f[53], in[105];

int main()
{
	int t, m, n, i;
	sd(t);
	while(t--)
	{
		fill_n(f, 53, -1);
		fill_n(in, 105, 0);
		sd(m); sd(n);
		for(i=0; i<m*2; i++)
		{
			sd(in[i]);
		}
		for(i=0; i<m; i++)
		{
			if((f[in[i]]) == -1)
				f[in[i]] = in[i+m];
			else
				f[in[i]] += in[i+m];
		}
		sort(f,f+53);
		for(i=0; i<53; i++)
		{
			if(f[i] != -1)
			{
				cout << f[i] << "\n";
				break;
			}
		}
	}
	return 0;
}

/*
1
6 4
1 2 3 3 2 2
7 3 9 1 1 1

5
*/