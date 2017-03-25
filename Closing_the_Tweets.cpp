#include <iostream>
#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) 
{
	unsigned int n,k,num;
	scanf("%d %d",&n,&k);
	if((n>=1)&&(k<=1000))
	{
    	int tweet[5000];
    	for(num=1;num<=n;num++)
    	tweet[num]=0;
		while(k-->0)
		{
			char a[9];
			scanf("%s",a);
			if(strlen(a)==8)
			{
				//printf("0\n");
				for(num=1;num<=n;num++)
    	        tweet[num]=0;
				//count=0;
			}
			else
			{
				scanf("%d",&num);
				if((num>=1)&&(num<=n))
				{
					tweet[num]^=1;
					//if(tweet[num]==1)
					//count++;
					//else
					//count--;
					//printf("%d\n",count);
					//printf("..%d..",tweet[num]);					
				}
			}
			int count=0;
			for(num=1;num<=n;num++)
			count += tweet[num];
			printf("%d\n",count);
		}
	}
	return 0;
}
