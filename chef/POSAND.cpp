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
	int t, n, i, j, k;
	sd(t);
	while(t--)
	{
		sd(n);
		if(n == 1)
			printf("1\n");
		else if( (n & (n - 1)) == 0 )
			printf("-1\n");
		else
		{
			printf("2 3 1");
			for(i=4; i<=n; i++)
			{
				if( (i & (i - 1)) == 0 )
				{
					cout << " " << i+1;
					cout << " " << i;
					i++;
					//printf(" %d",i+1);
				}
				else
					cout << " " << i;
			}
			cout << "\n";
		}
	}
	return 0;
}

/*
3
4
3
5

-1
1 3 2
2 3 1 5 4
*/