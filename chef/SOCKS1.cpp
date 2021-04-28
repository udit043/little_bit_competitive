#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	int a, b, c;
	sd(a);	sd(b);	sd(c);
	cout << a << b << c << "\n";
	if((a == b) || (a == c) || (b == c))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}