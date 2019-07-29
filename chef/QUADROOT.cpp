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
	float a, b, c, x1, x2;
	cin >> a >> b >> c;

	x1 = (sqrt(b*b-4*a*c)-b)/(2*a);
	x2 = ((-1*sqrt(b*b-4*a*c))-b)/(2*a);
	cout << fixed << setprecision(6) << x1 << "\n" << x2 << "\n";
	return 0;
}

/*
1
-8
15

5
3
*/