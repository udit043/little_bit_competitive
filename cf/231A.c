#include <stdio.h>

int main()
{
	int t,res=0;
	scanf("%d", &t);
	while(t--)
	{
		int a,s=0;
		scanf("%d", &a);
		if(a & 1)
			s++;
		scanf("%d", &a);
		if(a & 1)
			s++;
		scanf("%d", &a);
		if(a & 1)
			s++;
		if(s >= 2)
			res++;
	}
	printf("%d\n",res);
	return 0;
}