#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll a[mx];

double getAvg(int x)  
{  
	static ll sum, n;
	sum += x;  
	return (((double)sum) / ++n);  
}  

int main()
{
	ll t, n, i, j, k, sum;
	double avg;
	bool flag;
	sll(t);
	while(t--)
	{
		flag = false;
		sum=0;
		sll(n);
		for(i=0; i<n; i++)
		{
			sll(a[i]);
			avg = getAvg(a[i]);
		}
		
		cout << avg << "........\n";
		for(i=0; i<n; i++)
		{
			if(a[i] == avg)
			{
				flag=true;
				break;
			}
		}
		if(flag)
			printf("%lld\n", i+1);
		else
			printf("Impossible\n");
	}
	return 0;
}

/*
3
5
1 2 3 4 5
4
5 4 3 6
10
1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000

3
Impossible
1
*/