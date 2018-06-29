// Incomplete

#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int main()
{
	long long t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n;
		long long p,q;
		cin>>n;//length of ppin
		long long x=n/2;
		if(n%2==0)
		{
			p=1;
			q=pow(10,n-x);
		}
		if(n%2!=0)
		{
			p=1;
			q=pow(10,(n-x-1));
		}
		cout<<p<<" "<<q<<endl;
	}
	return 0;
}