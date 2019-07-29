#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

// fill_n(a, 201, 9);

int main()
{
	int q, a, b;
	bool f;
	sd(q);
	while(q--)
	{
		f = false;
		sd(a);	sd(b);
		if(abs(a-b) == 2)
			f = true;
		else
		{
			if((((min(a,b)-1)%2) == 0) && (abs(a-b) == 1))
				f = true;
		}
		if(f)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

/*
7
1 4
4 3
5 4
10 12
1 3
999999999 1000000000
17 2384823

NO
YES
NO
YES
YES
YES
NO
*/