#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, n, k, i, up, lo;
	string s;
	sd(t);
	while(t--)
	{
		up = lo = 0;
		cin >> n >> k;
		cin >> s;
		for(i=0; i<n; i++)
		{
			if(  ((int)s[i] >= 65) && ((int)s[i] <= 90)  )
				up++;
			else
				lo++;
		}
		//cout << up << " " << lo << "\n";
		if((n == k) || ((up <= k) && (lo <= k)))
			printf("both\n");
		else if((up > k) && (lo > k))
			printf("none\n");
		else if(up <= k)
			printf("chef\n");
		else if(lo <= k)
			printf("brother\n");
	}
	return 0;
}

/*
4
5 1
frauD
5 1
FRAUD
4 4
Life
10 4
sTRAWBerry

chef
brother
both
none
*/