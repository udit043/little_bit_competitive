#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a[26], b[26], i, ans=0;
		string s;
		memset(b, 0, sizeof(b));

		for(i=0; i<26; ++i)
			cin >> a[i];

		cin >> s;

		for(i=0; i<s.length(); ++i)
		{
			a[s[i]-97] = 0;
		}

		for(i=0; i<26; ++i)
			ans += a[i];

		cout << ans << "\n";
	}
	return 0;
}

/*
2
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
abcdefghijklmopqrstuvwz
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
thequickbrownfoxjumpsoverthelazydog

*/