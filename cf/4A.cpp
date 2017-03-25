#include <stdio.h>

int main()
{
	long long int a;
	scanf("%I64d", &a);

	if((a==1) || (a==2))
		printf("NO");
	else
	{
		if( a & 1)
			printf("NO");
		else
			printf("YES");
	}
	return 0;
}