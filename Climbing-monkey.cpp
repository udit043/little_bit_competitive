#include <coni.h>

#include <iostream>
int main(int argc, char** argv) 
{
	std::ios::sync_with_stdio(false);
	int t;
	std::cin>>t;
	while(t-->0)
	{
		float h,n,m,i,z,f;
		h=n=m=i=z=f=0;
		std::cin>>h>>n>>m;
		while(1)
		{
			i=i+n;
			f=f+1;
			if(i<h)
			{
				i=i-m;
			}
			else if(i>h)
			{
				f=(f-((i-h)/n));
				printf("%.2f\n",f);
				break;
			}
			else if(i==h)
			{
				printf("%.2f\n",f);
				break;
			}
		}
	}
	return 0;
}
