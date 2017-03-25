#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	long long t;
	scanf("%lld", &t);
	while(t--)
	{
		int n,i,res;
		char c;
		scanf("%d %c", &n, &c);

		if(n == 11)
			res = 0;

		else if(c == 'D')
		{
			if(n > 11)
				res = n-11;
			else
				res = 11+n;
		}
		else if(c == 'U')
		{
			if(n < 11)
				res = 11-n;
			else
				res = (19-n)+8;
		}
		printf("%d\n",res);
	}
	return 0;
}