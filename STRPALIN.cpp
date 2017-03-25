#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
static long int get_i()
{
	char c=getchar();
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
	short int t;
	t=get_i();
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int l1,l2,y,p;
		l1=a.length();
		l2=b.length();
		
		if(l1>l2)
		{
			for(y=0;y<l2;y++)
			{
				p=a.find(b[y]);
				if(p != -1)
				{
					printf("Yes\n");
					y=l2+1;
				}
			}
			if(y==l2)
			{
				printf("No\n");
			}
		}
		else
		{
			for(y=0;y<l1;y++)
			{
				p=b.find(a[y]);
				if(p != -1)
				{
					printf("Yes\n");
					y=l1+1;
				}
			}
			if(y==l1)
			{
				printf("No\n");
			}
		}
	}
	return 0;
} 