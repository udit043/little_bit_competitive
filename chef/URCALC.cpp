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
	long long a, b;
	char s;
	cin >> a >> b >> s;
	if(s == '+')
	{
		cout << a+b << "\n";
	}
	else if(s == '-')
	{
		cout << a-b << "\n";
	}
	else if(s == '*')
	{
		cout << a*b << "\n";
	}
	else
	{
		cout << fixed << setprecision(6) << ((double)a/(double)b) << "\n";
	}
	return 0;
}

/*
8
2
/

4.0
*/