#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,k,i,j;
		                        // n = no of files, m=ignored files, k=tracked files 
		cin >> n >> m >> k;
		int m1[m],k1[k],ans[n],res1=0,res2=0;

		memset(m1,0,sizeof m1);
		memset(k1,0,sizeof k1);
		memset(ans,0,sizeof ans);

		for(i=0; i<m; i++)
			cin >> m1[i];
		for(i=0; i<k; i++)
			cin >> k1[i];

		for(i=0; i<m; i++)
		{
			ans[m1[i]-1]++;
		}
		for(i=0; i<k; i++)
		{
			ans[k1[i]-1]++;
		}
		for(i=0; i<n; i++)
		{
			//cout << ans[i] << " ";
			if(ans[i] == 2)
				res1++;
			if(ans[i] == 0)
				res2++;
		}
		//cout << "\n";
		cout << res1 << " " << res2 <<"\n";
	}
	return 0;
}

/*
2
7 4 6
1 4 6 7
1 2 3 4 6 7
4 2 2
1 4
3 4

*/