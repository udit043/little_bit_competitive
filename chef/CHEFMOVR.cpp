#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,d;
	cin >> t;
	while(t--)
	{
		long long n, i, mov=0, sum=0, big=0, small=0;
		double avg=0;
		bool flag=true;
		cin >> n >> d;
		long long a[n];
		for(i=0; i<n; ++i)
		{
			cin >> a[i];
			sum += a[i];
		}
		avg = sum/n;
		//cout << "avg : " << avg << ", sum : "  << sum << ", n : " << n << "\n";
		if( (avg != floor(avg)) || ((avg != ceil(avg))) )
		{
			//cout << "point\n";
			flag=false;
			break;
		}
		else
		{
			for(i=0; i<n-d; ++i)
			{
				if( a[i] > avg )
				{
					big = a[i] - avg;
					a[i] -= big;
					a[i+d] += big;
					mov += big;
				}
				else if( a[i] < avg )
				{
					small = avg - a[i];
					a[i] += small;
					a[i+d] -= small;
					mov += small;
				}
			}
		}
		for(i=0; i<n; ++i)
		{
			if(a[i] != avg)
			{
				flag = false;
				break;
			}
		}
		if(flag == false)
			cout << "-1\n";
		else
			cout << mov << "\n";
	}
	return 0;
}

/*
3
5 2
1 4 5 2 3
3 1
1 4 1
4 2
3 4 3 5

3
2
-1
*/