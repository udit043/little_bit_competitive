// copied
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		ll n,i,j,num,result=0;
		sll(n);
		for(i = 0; i < n; i++)
		{
			sll(num);
			if(i % 2 == 0)
				result = result ^ num;
		}
		if(n % 2 == 0)
			cout << "0" << endl;
		else
			cout << result << endl;
	}
	return 0;
}