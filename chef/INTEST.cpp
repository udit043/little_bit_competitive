#include <stdio.h>

static long int get_i()
{
	char c=getchar_unlocked();
	while(c<'0'||c>'9')
	c=getchar();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar();
	}
	return ret;
}

int main()
{
	long long int n,k,res=0,i;
	n = get_i();
	k = get_i();
	while(n--)
	{
		i = get_i();
		if( i%k == 0)
			res += 1;
	}
	printf("%lld\n",res);//cout << res << "\n";
	return 0;
}

/*
7 3
1
51
966369
7
9
999996
11

*/