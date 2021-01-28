#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int memo[100], sum;
int fib_top_down(int n);
int fib_bottom_up(int n);

int main()
{
	int n, i, j, sum;
	sd(n);
	for(i=0; i<100; i++)
		memo[i]=-1;
	cout << "top down approach : ";
	pd(fib_top_down(n));

	cout << "bottom up approach : ";
	pd(fib_bottom_up(n));

	return 0;
}

int fib_top_down(int n)
{
	if(memo[n] != -1)
		return memo[n];
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	sum = fib_top_down(n-1) + fib_top_down(n-2);  // top down approach
	memo[n] = sum;
	return sum;
}

int fib_bottom_up(int n)
{
	memo[0]=0;	memo[1]=1;
	for(int i=2; i<=n; i++)
	{
		memo[i] = memo[i-1] + memo[i-2];
	}
	return memo[n];
}