// incomplete
#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll t, m, n, w, i, j, k;

ll prime_num1[100001];
int prime()
{

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	sll(t);

	return 0;
}

/*
2
1 10
3 5

2
3
4
7

3
5
*/


	/*while(t--)
	{
		sll(m);	sll(n);
		for(i=m; i<=n; i++)
		{
			for(j=2; j<=i/2; j++)
			{
				k=0;
				if(i % j == 0)
				{
					k=1;
					break;
				}
			}
			if(k == 1)
				k=0;
			else
			{
				if(i != 1)
					pll(i);
				k=0;
			}
		}
		printf("\n");
	}*/