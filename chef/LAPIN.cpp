#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s, s1, s2;
		ll i, j;
		cin >> s;

		for(i=0; i<s.length()/2; ++i)
			s1 += s[i];

		if(s.length() & 1)
		{
			for(i=s.length()-1; i > s.length()/2; --i)
			s2 += s[i];
		}
		else
		{
			for(i=s.length()-1; i >= s.length()/2; --i)
			s2 += s[i];
		}

		vector <char> av( s1.begin(), s1.end() );
		vector <char> bv( s2.begin(), s2.end() );

		sort(av.begin(), av.end());
		sort(bv.begin(), bv.end());

		if(av == bv)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

/*
6
gaga
abcde
rotor
xyzxy
abbaab
ababc

YES
NO
YES
YES
NO
NO
*/