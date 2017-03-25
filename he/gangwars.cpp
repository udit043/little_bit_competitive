// wrong incomplete

#include <bits/stdc++.h>
using namespace std;
int check[1000002];
int prime[1000002];
void shieve()
{
    for(long long int i=3;i<=1000002;i+=2)
    {
        if(!check[i])
        {
            for(long long int j=i*i;j<=1000002;j+=i)
                check[j]=1;
        }
    }
    prime[0] = 2;
    long long int j=1;
    for(long long int i=3;i<=1000002;i+=2)
    {
        if(!check[i]){
            prime[j++]=i;
        }
    }
}
int main()
{
    shieve();
    long long int t;
    scanf("%lld", &t);
    while(t--)
    {
        long long int a=1,b,n=9,temp,total=1,res=0;
        scanf("%lld",&b);
        long long int count=0,i,j,k;
        for(i=a;i<=b;i++)
        {
            temp=i;
            total=1;
            k=0;
            for(j=prime[k];j*j<=temp;j=prime[++k])
            {
                count=0;
                while(temp%j==0)
                {
                    count++;
                    temp/=j;
                }
                total *=count+1;
            }
            if(temp!=1)
                total*=2;
            if(total==n)
                res++;
        }
        printf("%lld\n",res);
    }
    return 0;
}