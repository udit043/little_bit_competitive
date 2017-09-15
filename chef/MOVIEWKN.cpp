#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int l[n], r[n], mul[n],max=-1,res=0,c=0;

		for(int i=0; i<n; i++)
			cin >> l[i];
		for(int i=0; i<n; i++)
			cin >> r[i];

		for(int i=0; i<n; i++)
		{
			mul[i] = l[i] * r[i];

			if(max < mul[i])
				max = mul[i];
		}

		for(int i=0; i<n; i++)
		{
			if( (max == mul[i]) && (res < r[i]) )
			{
				res = r[i];
				c = i;
			}
		}
		cout << c+1 << "\n";
	}
	return 0;
}