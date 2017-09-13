#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

ll a[mx];

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		bool flag = true;
		memset(a,0,sizeof(a));
		ll n,i,j,k,chota,bada;
		sll(n);

		for(i=0; i<n; ++i)
			sll(a[i]);

		for(i=2; i<n; ++i)
		{
			//if(i >= 2)
			{
//				chota = (a[i-1]-a[i-2]);
//				bada = (a[i]- a[i-1]);

//				cout << a[i-2] << ", " << a[i-1] << ", " << a[i] << "\n";

				if (a[i] < a[i-2])
				{
					flag = false;
					break;
				}
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/*
2
3
1 2 3
5
2 4 1 3 5

YES
NO
*/
