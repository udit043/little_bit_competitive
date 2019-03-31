#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int a[26];
int main()
{
	int n, i, k;
	string s;
	memset(a, 0, sizeof(a));

	sd(n);
	k=n;
	for(i=0; i<n; i++)
	{
		cin >> s;
		a[(int)s[0]-97] = 1;
	}

	cin >> s;

	for(i=0; i<s.length(); i++)
	{
		if(a[(int)s[i]-97] == 1)
			a[(int)s[i]-97] += 1;
	}

	for(i=0; i<26; i++)
	{
		if(a[(int)s[i]-97] == 2)
		{
			k--;
		}
	}

	if(k == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}

/*
5
a b c d e
demnopcba

YES
*/


/*
5
a b c d e
faabbcde

NO
*/


/*
	for(i=0; i<26; i++)
		cout << a[i] << " ";
	cout << "\n";
*/