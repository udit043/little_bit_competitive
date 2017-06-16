#include <bits/stdc++.h>
using namespace std;
 
#define MAXX 200009
 
int a[MAXX];
long long int dp[MAXX];
 
long long int findmeans(int n){
	if(n<0)return 0;
	if(n==0)return a[n];
	if(n==1)return (a[n]+a[n-1]);
	if(dp[n]!=-1)return dp[n];
	long long int temp=max(a[n]+findmeans(n-2), max(a[n-1]+a[n]+findmeans(n-3),a[n-1]+a[n-2]+findmeans(n-4)) );
	return(dp[n]=temp);
}
 
int main() {
	int n;
	cin>>n;
	memset(dp,-1,sizeof dp);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long int ans=findmeans(n-1);
	cout<<ans<<endl;
	return 0;
} 