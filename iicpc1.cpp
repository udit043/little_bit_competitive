#include <bits/stdc++.h>

#define gc getchar

using namespace std;


 int read(void) {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
   int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

int main(void)
{
    int t;
    t=read();

    while(t--)
    {
    	int n;
    	n=read();
    	int a[n];
    	for(int i=0; i<n; i++)
    	{
    		a[i]=read();
    	}
    	sort(a,a+n);

    	long long int mul;

    	for(int i=0; i<n; i++)
    	{
    		for(int y=i+1; y<n; y++)
    		{
    			mul = a[i] * a[y];
    			for(int i=0; i<n;i++)
    			{
    				if(mul == a[i])
    				{
    					
    				}
    			}
    		}
    	}
    }
    return 0;
}
