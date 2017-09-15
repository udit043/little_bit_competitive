// Editorial
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, i;
		cin >> n;

		if( n == 1 )
			printf("2\n");
		else if(((n+1)&n)==0)
		{
			printf("%lld\n",n/2);
		}
		else
		{
			printf("-1\n");
		}

	}
	return 0;
}