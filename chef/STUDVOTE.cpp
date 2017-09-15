//15-16 hrs, 19dec
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k,n,i,res=0;
		cin >> n >> k;

		int a[n+1],b[n+1],f[n+1];
		memset(b,0,sizeof b);
		memset(f,0,sizeof f);

		for(i=1; i<n+1; i++)  //input of a[i]
		{
			cin >> a[i];

			if(a[i] != i)    //confirming for good votes
			{
				b[a[i]]++;
			}
			else
			{
				b[a[i]]=0;
				f[a[i]]=1;
			}
		}
		for(i=1; i<n+1; i++)
		{
			//cout <<"i:"<<i<<",b["<<i<<"]:"<<b[i]<<",b[a["<<i<<"]]:"<<b[a[i]]<<",f[a["<<i<<"]]:"<<f[a[i]]<<",f[<<" << i <<"]:" << f[i] << " outside\n";
			if( (b[i] >= k) && (f[i] == 0) )
			{
			//	cout <<"i:"<<i<<",b["<<i<<"]:"<<b[i]<<",b[a["<<i<<"]]:"<<b[a[i]]<<"\n";
				res++;       //counting result
			}
		}
		cout << res << "\n";
	}
	return 0;
}

/*

8
1 1
1
expected : 0
2 1
1 1
expected : 1
2 1
2 1
expected : 2
2 1
2 2
expected : 1

2 2
1 2
expected : 0
2 2
2 1
expected : 0
2 2
1 1
expected : 0
2 2
2 2
expected : 0



9

3 1
1 1 1
3 1
2 2 2
3 1
3 3 3

3 1
1 2 3
3 1
1 2 2
3 1
1 3 3
3 1
1 3 2

3 1
1 1 2
3 1
1 2 1
3 1
1 2 2
3 1
1 1 3
3 1
1 3 1


3 1
2 1 2
3 1
2 1 1
3 1
2 2 1
3 1
2 2 2

*/