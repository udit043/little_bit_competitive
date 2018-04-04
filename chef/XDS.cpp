// incomplete

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		ll n, i, f;
		sll(n);

		if(n == 1)
		{
			printf("XD\n");
		}
		else
		{
			for(i=1; ; ++i)
			{
				if(pow(2, i) <= n)
				{
//					cout << pow(2, i) << " .. " << i << " .. " << n << "\n";
					f = i;
				}
				else
					break;
			}
		
			for(i=0; i<f; ++i)
				printf("X");

			for(i=0; i<f; ++i)
				printf("D");

//			if(f & 1)
//				printf("D");

			printf("\n");
		}
	}
	return 0;
}

/*
1
9

XXXDDD
*/