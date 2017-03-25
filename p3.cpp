#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define gc getchar 
#define len 100000
#define mo 1000000007

int a[len];
long long int product;

int read(void){
    char c=gc();
    while(c <'0' || c >'9') c=gc();
    int ret=0;
    while(c>='0' && c<='9'){
        ret=ret*10+c-'0';
        c=gc();
    }
    return ret;
}

unsigned gcd(unsigned u, unsigned v)
{
    long long shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned long long t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}

int gcd_a(int n){
    if(n==0) return 1;
    if(n==1) return a[0];
    if(n==2) return gcd(a[0], a[1]);
    int h = n / 2;
    return gcd(gcd_a(h), gcd_a(n - h));
}

void set(int *set, int size){
    int set_size =pow(2,size);
    int counter, j;
    product =1;
    for(counter = 0; counter < set_size; counter++)
    {
      memset(a,0,sizeof(a));
      int i=0;  
      for(j = 0; j < set_size; j++){
          if(counter & (1<<j)){
            a[i]= set[j];
            i++;
          }  
       }
       product =(product*gcd_a(i))%mo;
    }
}


int main(void){
    int t=read(),n,i; 
    while(t--){
        n=read();
        int a1[n];
        for(i=0;i<n;i++){
            a1[i]=read();
        }
        set(a1,n);
        printf("%lld\n",product);
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;


long long unsigned v=0,vv=0;

void printPowerSet(long long *a, long long set_size);
unsigned long long gcd(unsigned long long u, unsigned long long v);

int main()
{
    long long t,i;
    cin >> t;
    long long n;
    while(t--)
    {
        cin >> n;
        long long a[n];
        for(i=0; i<n; i++)
        cin >> a[i];
        printPowerSet(a, n);
    }
    return 0;
}

unsigned long long gcd(unsigned long long u, unsigned long long v)
{
    long long shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned long long t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}


void printPowerSet(long long *a, long long set_size)
{
    unsigned long long pow_set_size = pow(2, set_size);
    long long counter, j;

    for(counter = 0; counter < pow_set_size; counter++)
    {
        for(j = 0; j < set_size; j++)
        {
            v=1;
            if(counter & (1<<j))
            {
                printf("%lld ", a[j]);
            }
        }
        printf("\n");
    }
}
*/