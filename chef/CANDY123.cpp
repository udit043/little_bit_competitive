#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int main()
{
	int t, a, b, x, y, i;
	sd(t);

	while(t--)
	{
		x=0; y=0;
		sd(a); sd(b);

		for(i=1; i<=32; i++)
		{
			if(i*i <= a)
				x = i;

			if((i*i + i) <= b)
				y = i;
		}

		if(x > y)
			printf("Limak\n");
		else
			printf("Bob\n");
	}
	return 0;
}

/*
10
3 2
4 2
1 1
1 2
1 3
9 3
9 11
9 12
9 1000
8 11

Bob
Limak
Limak
Bob
Bob
Limak
Limak
Bob
Bob
Bob
*/