#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int john[1002], jack[1002];

int main()
{
	int t, a, b, n, m, c, i, j, k, sjohn, sjack;
	sd(t);
	while(t--)
	{
		sjohn = sjack = c = 0;
		sd(n);	sd(m);
		for(i=0; i<n; i++)
		{
			sd(john[i]);
			sjohn += john[i];
		}
		for(i=0; i<m; i++)
		{
			sd(jack[i]);
			sjack += jack[i];
		}
		sort(john, john+n);
		sort(jack, jack+m);

		i=0; j=m-1;
		while((sjack >= sjohn) && (i<n) && (j>=0))
		{
			c++;
			k=john[i];
			john[i]=jack[j];
			jack[j]=k;

			sjack = sjack + jack[j] - john[i];
			sjohn = sjohn + john[i] - jack[j];
			i++; j--;
		}
		if(sjack >= sjohn)
			printf("-1\n");
		else
			pd(c);
	}
	return 0;
}

/*
2
2 3
2 2
5 5 5
4 3
1 3 2 4
6 7 8

2
1
*/