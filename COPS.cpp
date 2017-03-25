#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,x,y,i,j,range,res=0,left,right;
		cin >> m >> x >> y;
		range = x*y;

		int a[m],num[101];
		memset(num,0,sizeof num);

		for(i=0; i<m; i++)
		{
			cin >> a[i];
		}
		sort(a,a+m);

		for(i=0; i<m; i++)
		{
			left  = a[i] - range;
			right = a[i] + range;

			if(left <= 1)
				left = 1;
			if(right >= 100)
				right = 100;

			fill_n(num+left,right-left+1,1);
		}

		for(i=1; i<101; i++)
			res += num[i];

		cout << 100-res << "\n";
	}
	return 0;
}

/*
3
4 7 8
12 52 56 8
2 10 2
21 75
2 5 8
10 51

*/

/*	int a[40];
	memset(a,0,sizeof a);

	for(int i=0; i< 40; i++)
		cout << a[i] << " ";

	cout << "\n";

	fill_n(a+1,2,4);

	for(int i=0; i< 40; i++)
		cout << a[i] << " ";

	cout << "\n";
*/