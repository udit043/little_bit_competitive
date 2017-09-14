#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

#define ll long long
ll a[101];

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		memset(a, 0, sizeof(a));
		int k, n, i, j, index;
		sd(n);
		for(i=0; i<n; ++i)
			sll(a[i]);
		sd(k);
		j = a[k-1];
		sort(a,a+n);
		index = distance(a, find(a, a + n, j));
		cout << ++index << "\n";
	}
	return 0;
}

/*
3
4
1 3 4 2
2
5
1 2 3 9 4
5
5
1 2 3 9 4 
1

3
4
1
*/