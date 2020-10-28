#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int a[mx], s[mx];
int main()
{
	int n, q, i, j, k, sum;
	bool flag;
	sd(n);	sd(q);
	for(i=0; i<n; i++)
	{
		sd(a[i]);
	}
	for(i=0; i<n; i++)
	{
		k = a[i];
		for(sum=0; k>0; sum+=k%10, k/=10); 
		s[i] = sum;
	}
	while(q--)
	{
		flag = false;
		sd(k);
		for(i=k; i<n; i++)
		{
			if((s[k-1] > s[i]) && (a[k-1] < a[i]))
			{
				flag = true;
				break;
			}
		}
		if(flag)
			pd(i+1);
		else
			printf("-1\n");
	}
	return 0;
}

/*
5 5
62 70 28 62 92
1
5
3
4
2

2
-1
4
-1
-1
*/