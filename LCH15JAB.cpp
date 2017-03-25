#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int c[26];
		memset(c,0,sizeof c);
		int f=0;
		string s;
		cin >> s;
		for(int i=0; i<s.length(); i++)
		{
			c[s[i]-97]++;
		}
		sort(c,c+26);
		valarray<int> myvalarray (c,26);
		for(int i=25; i>=0; i--)
		{
			if( c[i] == ( myvalarray.sum()-c[i] ) )
			{
				f = 1;
				break;
			}
		}
		if(f==1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

/*
4
acab
zzqzqq
abc
kklkwwww

*/