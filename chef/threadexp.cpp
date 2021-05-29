#include <bits/stdc++.h>
#include <thread>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

void foo() 
{
	cout << "hello world\n";
}

void bar(int x)
{
	cout << "xxxxxxx " << x << "\n";
}

int main() 
{
	thread first (foo);     // spawn new thread that calls foo()
	thread second (bar,0);  // spawn new thread that calls bar(0)

	cout << "main, foo and bar now execute concurrently...\n";

	// synchronize threads:
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes

	cout << "foo and bar completed.\n";

	return 0;
}