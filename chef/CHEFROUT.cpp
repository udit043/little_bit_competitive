#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, i, j, k, cook=0, eat=0, sleep=0, stop=0;
		string s;
		cin >> s;
		
		for(i=0; i<s.length(); ++i)
		{
			if(s[i] == 'C')
			{
				cook += 1;
				if(cook >= 1)
				{
					if(eat != 0)
					{
						stop = 1;
						break;
					}
				}
				if(sleep != 0)
				{
					stop = 1;
					break;
				}
			}

			else if(s[i] == 'S')
			{
				sleep += 1;
			}
			else
			{
				eat = 1;
				if(sleep != 0)
				{
					stop = 1;
					break;
				}
			}
		}

		if(stop == 1)
			cout << "no\n";
		else
			cout << "yes\n";
	}
	return 0;
}

/*
5
CES
CS
CCC
SC
ECCC

yes
yes
yes
no
no
*/