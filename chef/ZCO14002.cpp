#include <bits/stdc++.h>
using namespace std;
 
#define maxx 200009
int a[maxx],n,dp[maxx];

int findme(int n){
	if(n<0)return INT_MAX;
	if(dp[n]!=-1)return dp[n];
	if(n<3)return a[n];
	int temp=a[n]+min(findme(n-3),min(findme(n-1),findme(n-2)));
	dp[n]=temp;
	return dp[n];
}
int main() {
	cin>>n;
	memset(dp,-1,sizeof dp);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=findme(n-1);
	cout<<min(min(dp[n-1],dp[n-2]),dp[n-3])<<endl;
	return 0;
}