// wrong incomplete

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,d,x,x1=0,i,y,f=0;
	scanf("%lld %lld %lld", &t, &d, &x);
	if(t == x)
		printf("YES\n");
	else
	{
		x1=t;
		for(y=1; ;y+=1)
		{
			x1 = x1 + d*y;
			if( (x1 == x) || ((x1+1) == x) )
			{
				printf("YES\n");
				f=1;
				break;
			}
			else
			{
				if(x1 > x)
					break;
			}
		}
		if(f == 0)
			printf("NO\n");
	}

	return 0;
}