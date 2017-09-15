#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		int i,s=0,m=0;

		for(i=0; i<str.length(); i++)
		{
			if(str[i] == 's')
				++s;
			else
				++m;
		}

		for(i=0; i<str.length(); i++)
		{
			if(str[i] == 'm')
			{
				if(str[i-1] == 's')
				{
					--s;
					str[i] = '*';
					str[i-1] = '*';
					continue;
				}
				if(str[i+1] == 's')
				{
					--s;
					str[i] = '*';
					str[i+1] = '*';
					continue;
				}
			}
		}

		if(m > s)
			cout << "mongooses\n";
		else if(s > m)
			cout << "snakes\n";
		else
			cout << "tie\n";

		//cout << "man " << m << " snk " << s << "\n";
	}
	return 0;
}

/*
4
sm
ssm
sms
ssmmmssss

*/