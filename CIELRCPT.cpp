#include <bits/stdc++.h>
using namespace std;
 
long long int supp[]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
long long int dp[1000002];
 
 
long long int mincoin(long long int v){
	if(v<0)return INT_MAX;
	if(dp[v]!=-1)return dp[v];
	long long int temp=INT_MAX;
	for(int i=0;i<12;i++){
		temp=min(temp,1+mincoin(v-supp[i]));
	}
	dp[v]=temp;
	return temp;
}
int main()
{
	int t;
	cin >> t;
	memset(dp,-1,sizeof dp);
	for(int i=0;i<12;i++){
			dp[supp[i]]=1;                // This means for supp[i] cent we need only one coin as we have coin avaiable of this much money..
	}
	while(t--)
	{
		long long int cent;
		cin >> cent;
		dp[0]=1;
		long long int ans=mincoin(cent);         // answer for cent amount of money..
		cout<<ans<<endl;
	}
	return 0;
}