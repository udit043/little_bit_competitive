#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
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
	long long int n,k,i,j,ans=0;
	n = get_i();
	k = get_i(); //cin >> n >> k;
	long long int a[n];
	memset(a, 0, sizeof a);
	for(i=0; i<n; i++)
		a[i] = get_i();//cin >> a[i];
	sort(a, a+n);
	for(i=n-1; i>0; i--)
	{
		for(j=i-1; j>=0; j--)
		{
			if(abs(a[i]-a[j]) >= k)
			{
				//cout << "han\n";
				ans = ans + j + 1;
				break;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}