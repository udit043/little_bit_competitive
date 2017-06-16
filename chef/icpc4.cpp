#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,r=0;
		cin >> n;
		r = r + n;

		int a[n];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}

		sort(a,a+n);

    int fla[] = {0};

    for(int i=n-1; i>=0; i--)
    {
        int step=1;
        if(fla[i] == 0)
        {
         
         for(int y= i; y>=0; y--)
         {
          if(a[i] % a[i-1] == 0)
          {
           r = r + step;
           step += 1;
           fla[y] = 1;
          }

          }
        }
      }
		
	}
    return 0;
}






/*#include <stdio.h>
#define gc getchar
#include <stdlib.h>
#include <string.h>
#define len 1000000

long  int a[len];

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

long int read1(void) {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

int cam (const void * a, const void * b)
{
  return ( *(long int*)a - *(long int*)b );
}

int sq(long long int n){
    if (n==0) return 0;
    if (n < 0) n = -n;
    int x = n>>1;
    if (n&1)
        return ((sq(x)<<2) + (x<<2) + 1);
    else
        return (sq(x)<<2);
}

int main(void){
    int t=read(),n,i,j;
    long int count =0;
    while(t--){
        n=read();
       //printf("%d\n", n);
        count=n;
        //printf("%ld\n", count);
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++){
            a[i]=read1();
        }
        qsort(a,n, sizeof(long int),cam);
        long long int c=0;
        for(i=n-1; i>=0;i--){
            c=0;
            long int x =a[i];
            for(j=n-2;j>=0;j--){
                if(x%a[j]==0){
                    c++;
                    x=a[j];
                }
            }
            count =(count+sq(c))%1000000007;
           // printf("%ld\n", count);
        }
        printf("%ld\n", count-1);
    }
    return 0;
}*/