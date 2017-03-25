#include <stdio.h>
int main(int argc, char** argv) 
{
    int t,b,count,M,l;
    long int N,check,str;
	scanf("%d",&t);
	while((t-->0)&&(t<=200))
	{
		N=0;M=0;
		scanf("%ld %d",&N,&M);
		if((N<=2000000000)&&(N>=1))
		{
			check=0;
			b=0;
			for(l=0;l<M;l++)
			{
				scanf("%ld",&str);
				check=check+str;
				if(str==1)
				b=b+1;
			}
			if(check==N)
            {
            	count = M-1;
            	if(M>2)
            	{
            		if(M%2==0)
            		{
            			if(b>=(M/2-1))
            			count=count-(M/2-1);
            			else
            			count=count-b;
            		}
            		else
            		{
            			if(b>=M/2)
            			count=count-M/2;
            			else
            			count=count-b;
            		}
            	}
            	printf("%d\n",count);
        	}
    	}
	}
	return 0;
}
