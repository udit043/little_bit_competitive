#include <bits/stdc++.h>
using namespace std;

long long int n, i, j, a[302], dp[302], c, f, coun, sum, k, ans=999999999, ut=9999999;

long long int func(long long int start)
{
	cout << "start " << start << "\n";
	if(start < 0)
		return INT_MAX;
	if(start == 0)
		return 0;
	for(k=0; k<start; k++)
	{
		c=0; f=0; coun=0; sum=0;
		///if(dp[k] == -1)
		{
			for(i=k; i<start; ++i)
			{				
				c = i;
				for(j=start-1; j>i; --j)
				{
					if( (a[c] == a[j]) && (i != j) )
					{
						++c;
						coun = max(coun, j);
					}
					else
					{
						c=i;
						coun = 0;
					}
				}
//				cout << "yaha " << i << "\n";
				sum += 1;
				i = max(i, coun);
			}
			ut = min(ut,func(k));
			dp[k] = sum;
			cout << "suno.. ut = " << ut << " k = " << k << "\n\n";
		}
	}
}

int main()
{
	cin >> n;

	for(i=0; i<n; i++)
		cin >> a[i];

	memset(dp, -1, sizeof dp);

	int res = func(n);

	for(k=0; k<n; k++)
	{
		cout << dp[k] << " ";
		//ans = min(ans, dp[k]);
	}
	cout << "\n";// << ans << "\n";
	return 0;
}
















/*#include <bits/stdc++.h>
using namespace std;
 
#define maxx 200009
int a[maxx],n,dp[maxx];

int findme(int n)
{
	if(n<0)return INT_MAX;
	if(dp[n]!=-1)return dp[n];
	if(n<3)return a[n];
	int temp=a[n]+min(findme(n-3),min(findme(n-1),findme(n-2)));
	dp[n]=temp;
	return dp[n];
}
int main()
{
	cin>>n;
	memset(dp,-1,sizeof dp);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=findme(n-1);
	cout<<min(min(dp[n-1],dp[n-2]),dp[n-3])<<endl;
	return 0;
}*/

/*
5
34 45 34 56 34

*/

/*
	for(i=0; i<n; i++)
	{
		c++;
		for(j=0; j<=i; j++)
		{
			if( (a[i] == a[j]) && (i != j) )
			{
				c1++;
				c=0;
			}
		}
	}
*/