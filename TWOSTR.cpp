#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int flag = 0;
		string s1,s2;
		cin >> s1 >> s2;

		for(int i=0; i<s1.length(); i++)
		{
			if (s1[i] != s2[i]) 
			{
				if((s1[i] != '?') && (s2[i] != '?'))
				{
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}

/*
2
s?or?
sco??
stor?
sco??

*/