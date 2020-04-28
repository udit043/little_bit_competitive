// incomplete
#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define mod 1000000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	int t;
	bool flag;
	ll x, k;
	sd(t);
	while(t--)
	{
		flag = false;
		sll(x);	sll(k);

		if(x == 1)
			flag = false;

		else if(k == 1)
			flag = true;

		else if((k == 2) && ((x >= 4) && ( x%2 == 0 )) )  //2 3     1 2 3 6 
			flag = true;

		else
			flag = false;


		if(flag)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}

/*
1
4 2

1
*/