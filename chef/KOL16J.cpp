#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 
int a[101], b[101];

int main()
{
	int t, n, i;
	bool f;
	sd(t);
	while(t--)
	{
		f = true;
		sd(n);
		for(i=0; i<n; i++)
			sd(a[i]);
		for(i=0; i<n; i++)
		{
			b[i] = a[i];
			if(a[i] > n)
			{
				f = false;
				break;
			}
		}

		if(f)
		{
			sort(b, b+n);
			for(i=0; i<n; i++)
			{
				if(b[i] != (i+1))
				{
					f = false;
					break;
				}
			}
			if(f)
			{
				for(i=0; i<n; i++)
				{
					if(b[i] != a[i])
					{
						f = true;
						break;
					}
					else
					{
						f = false;
					}
				}
			}
		}
		if(f == true)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

/*
4
3
2 3 1
3
1 5 3
3
1 2 3
2
1 1

yes
no
no
no
*/