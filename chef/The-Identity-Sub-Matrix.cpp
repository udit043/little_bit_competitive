#include <iostream>
int main(int argc, char** argv) 
{
	std::ios::sync_with_stdio(false);
	int t;
	std::cin>>t;
	while(t-->0)
	{
		int n,i,count=0;
		std::cin>>n;
		if(n<=100)
		{
			int a[n*n];int boun=n;
			for(i=0;i<n*n;i++)
			{
				std::cin>>a[i];
				if(a[i]==1)
				count=count+1;
			}
			for(i=0;i<n*n;i++)
			{
				if(a[i]==1)
				{
					count=count+1;
					if((((i+1)%boun)!=0)||(n==2))
					{
	            		for(int j=i+n+1;j<n*n;j=j+n+1)
	            		{
	            			if(a[j]==1)
	            			{
	            		   		a[j]='7';
	            	    	}
	            	    	else
	            	    	j=n*n;
	            	    }
	            	}	
				}
			}
			std::cout<<count<<'\n';
			for(i=0;i<n*n;i++)
			{
				a[i]='7';
			}
		}
	}
	return 0;
}
