#include <bits/stdc++.h>
using namespace std;

string s;
int c[27];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(c, 0, sizeof(c));
		int n,m,i,j,k;

		cin >> s >> n >> m;

		for(i=n; i<=m; ++i)
		{
			c[(s[i] - 48)-48] += 1;
//			cout << ((s[i] - 48)-49) << " ";
		}

		for(i=0; i<n; ++i)
			cout << s[i];

		for(i=26; i>0; --i)
		{
//			cout << c[i] << " ";
			for(j=0; j<c[i]; ++j)
				cout << char(i+96);
		}

		for(i=m+1; i<s.length(); ++i)
			cout << s[i];
		cout << "\n";
	}
	return 0;
}

/*
3
hlleo 1 3
ooneefspd 0 8
effort 1 4

hlleo
spoonfeed
erofft
*/

