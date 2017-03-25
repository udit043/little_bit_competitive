#include <bits/stdc++.h>
using namespace std;
 
long long int supp[]={1, 2, 5, 10, 50, 100};
long long int dp[1000002];
unsigned long long int l=1;
long long int mincoin(long long int v)
{
	cout << "hi:" << l << ", v:" << v << " .. ";
	l++;
	
	if(v<0)return INT_MAX;

	if(dp[v]!=-1)return dp[v];

	long long int temp=INT_MAX;
	for(int i=0;i<6;i++)
	{
		cout << "andr=" << "i:" << i << "," << temp << " _ ";
		temp=min(temp,1+mincoin(v-supp[i]));
		cout << temp << "\n";
	}
	dp[v]=temp;
	return temp;
}
int main()
{
	int t;
	cin >> t;
	memset(dp,-1,sizeof dp);
	for(int i=0;i<6;i++)
	{
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

/*
#include <bits/stdc++.h>
using namespace std;

int table[1000002];
int minCoins(int coins[], int m, int V)
{
	//int table[V+1];
	if(table[V+1] == 0)
	{
		table[0] = 0;

		for (int i=1; i<=V; i++)
			table[i] = INT_MAX;
 
		for (int i=1; i<=V; i++)
		{
			for (int j=0; j<m; j++)
			if (coins[j] <= i)
			{
				int sub_res = table[i-coins[j]];
				{
					cout << "sub_res = " << sub_res << " ... \n";
					if (sub_res != INT_MAX && sub_res + 1 < table[i])
					{
						cout << "table[i] : "<< table[i] << " nn ";
						table[i] = sub_res + 1;
						cout << table[i] << " nn \n";
					}
				}
			}
		}
	}
	return table[V];
}

int main()
{
	int t,coins[]={1,2,5,10,50,100};
	cin >> t;
	while(t--)
	{
		unsigned long long int n;
		cin >> n;
		cout << minCoins(coins,6,n) << "\n";
	}
	return 0;
}*/