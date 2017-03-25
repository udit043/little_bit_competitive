#include <bits/stdc++.h>

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define ss(x) scanf(" %s", &x);
#define MAX 1000007
#define MOD 1000000007

using namespace std;

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		ll n,i,y1,y2,len,flag=0;
		string s1,s2;
		//ss(s1); ss(s2);
		cin >> s1 >> s2;
		len = s1.length();
		ll shift[len];

		for(i=0; i<len; ++i)
		{
			y1 = (int)s1[i] - 64;
			y2 = (int)s2[i] - 64;

			if( y2 >= y1)
			{
				n = y2-y1;
			}
			else
			{
				n = y1-y2;
				n = 26 - n;
			}
			shift[i] = n;
		}
		for(i=0; i<len-1; ++i)
		{
			if(shift[i] != shift[i+1])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			printf("-1\n");
		else
			printf("%lld\n", n);
	}
	return 0;
}