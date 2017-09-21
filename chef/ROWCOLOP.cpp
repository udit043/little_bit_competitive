#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sll(x) scanf("%lld", &x)
#define mx 1000007

ll row[mx], col[mx];

int main()
{
	memset(row, 0, sizeof (row));
	memset(col, 0, sizeof (col));

	ll n, q, i, j, k, mr=0, mc=0, sm=0, ty1, ty2;
	string s;
	sll(n); sll(q);

	for(i=1; i<=q; ++i)
	{
		cin >> s;
		sll(ty1); sll(ty2);

		if(s[0] == 'R')
		{
			row[ty1] += ty2;
			mr = max(mr, row[ty1]);
		}
		else
		{
			col[ty1] += ty2;
			mc = max(mc, col[ty1]);
		}
	}
	printf("%lld\n", mr+mc);
	return 0;
}

/*
2 4
RowAdd 1 3
ColAdd 2 1
ColAdd 1 4
RowAdd 2 1

7
*/