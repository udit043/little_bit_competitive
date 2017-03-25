#include <bits/stdc++.h>
using namespace std;

long long int supp[1000002],dp[1000002],n,k;
 
 
long long int mincoin(long long int v)
{
	if(dp[v]!=-1)
		return dp[v];
	
	long long int temp=INT_MAX;
	
	for(int i=0;i<k;i++)
	{
		temp=min(temp,supp[v]*mincoin(v-supp[i]));
	}
	
	dp[v]=temp;
	
	return temp;
}
int main()
{
	long long int i;
	cin >> n >> k;
	
	long long int a[n];
	for(i=0; i<n; i++)
	{
		cin >> a[i];
		supp[i]=i+1;
	}

	memset(dp,-1,sizeof dp);          // dp[i] means minimum number of coins needed for changing i cents..
	for(int i=0;i<n;i++)
	{
		dp[supp[i]]=i+1;                // This means for supp[i] cent we need only one coin as we have coin avaiable of this much money..
	}

	long long int ans=mincoin(n);         // answer for cent amount of money..
	cout<<ans<<endl;

	return 0;
}

/*
4 2
1 2 3 4

*/