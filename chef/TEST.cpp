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
	int n;
	while(1)
	{
		n = get_i();
		if( n == 42)
			break;
		printf("%d\n",n);
	}
	return 0;
}