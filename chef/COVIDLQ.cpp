#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int a[101];

int main()
{
	int t, n, i, num, j;
	bool f;
	sd(t);
	while(t--)
	{
		j = 0;
		f = true;
		sd(n);
		for(i=1; i<=n; i++)
		{
			sd(num);
			if(num == 1)
			{
				a[j] = i;
				j++;
			}
		}
		for(i=0; i<j-1; i++)
		{
			if((a[i+1] - a[i]) < 6)
			{
				f = false;
			}
			if(f == false)
				break;
		}
		if(f)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/*
3
3
1 0 1
7
1 0 0 0 0 0 1
11
0 1 0 0 0 0 0 1 0 0 1

NO
YES
NO
*/