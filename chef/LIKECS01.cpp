#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d", &x);

int a[26];
bool flag;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		flag = false;
		string s;
		cin >> s;
		for(int i=0; i<s.length(); ++i)
		{
			a[s[i]-97] += 1;
			if(a[(s[i]-97)] > 1)
			{
				flag = true;
				break;
			}
		}
		if(flag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

/*
4
likecs
venivedivici
bhuvan
codechef

no
yes
no
yes
*/