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
	int t, a, b, s, p, i;
	sd(t);
	while(t--)
	{
		sd(a);	sd(b);
		i = 1; p = 0;
		while((a != 0)||(b != 0))
		{
			s = ((a%10) + (b%10))%10;
			p = p + s*i;
			a = a/10;
			b = b/10;
			i = i*10;
		}
		cout << p <<"\n";
	}
	return 0;
}

/*
2
12 9
25 25

11
40
*/