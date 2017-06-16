#include <stdio.h>
#define gc getchar
#include <stdlib.h>
#include <limits.h>
#define len 100000

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

int cam (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int find( int n, int x)
{
    int l, r;
    l = 0;
    r = n-1;
    while (l < r){
         if(a[l] * a[r] == x)
              return 1;
         else if(a[l] * a[r] < x)
              l++;
         else
              r--;
    }
    return 0;
}

int main(void){
    int t=read(),n,i;
    while(t--){
        n=read();
        int flag=0;
        for(i=0;i<n;i++){
           scanf("%ld",&a[i]);
        }
        if(n==1){
            printf("no\n");
            continue;
        }
        qsort(a,n,sizeof(long int),cam);
        for(i=0;i<n;i++){
            if(a[i]==0){
                flag=1;
                break;
            }
            int y= find(n,a[i]);
            //printf("%d\n",y);
            if(y==1){
               flag=1;
                break;
            }
        }
        if(flag==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}