#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

ll getSum(ll n) 
 { 
    ll sum; 
  
    /* Single line that calculates sum */
    for (sum = 0; n > 0; sum += n % 10, n /= 10); 
  
    return sum; 
 } 

int main()
{
	ll t, n, an, bn, a, b, i, j, ans;
	sll(t);
	while(t--)
	{
		an=bn=0;
		sll(n);
		for(i=0; i<n; i++)
		{
			sll(a);	sll(b);
			a = getSum(a);
			b = getSum(b);
			if(a > b)
				an++;
			else if(a < b)
				bn++;
			else
			{
				an++;	bn++;
			}
		}
		if(an > bn)
			cout << "0 " << an << "\n";
		else if(an < bn)
			cout << "1 " << bn << "\n";
		else
			cout << "2 " << bn << "\n";
	}
	return 0;
}

/*
2
3
10 4
8 12
7 6
2
5 6
3 4

0 2
2 1
*/