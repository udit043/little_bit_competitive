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
	int t, n, x, y, k, i, j, p, q;
	bool flag;
	sd(t);
	while(t--)
	{
		flag = false;
		sd(n);	sd(k);
		sd(x);	sd(y);

		if(k == 0)
		{
			if(x == y)
				flag = true;
			else
				flag = false;
		}
		else
		{
			//if(n%k != 0)
			//	flag = true;	
			//else
			{
				p = x;
				for(i=0; i<=k*100; i++)
				{
					p = ((p+k)%n);
//					cout << i << " is " << p << "\n";
					if(p == y)
					{
						flag = true;
							break;
					}
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
6 2 5 3
12 3 4 2

YES
NO
*/