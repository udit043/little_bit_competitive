// incomplete
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
		int i;
		unsigned long long int num = 100000,l = 100000,r = 100000;

		for(i=0; i<s.length(); ++i) // deciding number on left side of sign
		{
			if(s[i] == '>')
			{
				num += 1;
				r = max(r, num);
			}
			else if(s[i] == '<')
			{
				num -= 1;
				l = min(l, num);
			}
		}

		if(s[i-1] == '>') // deciding number on right side of sign
		{
			num -= 1;
			l = min(l, num);
		}
		else if(s[i-1] == '<')
		{
			num += 1;
			r = max(r, num);
		}
		cout << (r-l+1) << "\n";
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