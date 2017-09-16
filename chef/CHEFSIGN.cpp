// editorial
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		long long int i,ks=0, kg=0, mks=0, mkg=0;
		for(i=0; i<s.length(); ++i)
		{
			if(s[i] == '>')
			{
				ks = 0;
				kg += 1;
			}
			else if(s[i] == '<')
			{
				ks += 1;
				kg = 0;
			}
			mks = max(mks, ks);
			mkg = max(mkg, kg);
		}
		cout << max(mks, mkg) + 1 << "\n";
	}
	return 0;
}

/*
4
<<<
<><
<=>
<=<

4
2
2
3

1 < 2 < 3 < 4
1 < 2 > 1 < 2
1 < 2 = 2 > 1
1 < 2 = 2 < 3

*/