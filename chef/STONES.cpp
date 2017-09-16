// vector sort
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		string a,b;
		int i,j,cnt=0;

		cin >> a >> b;

		vector <char> av( a.begin(), a.end() );
		vector <char> bv( b.begin(), b.end() );
		vector <char> abs, bas;

		sort(av.begin(), av.end());
		sort(bv.begin(), bv.end());

		set<char> as( av.begin(), av.end() );
		set<char> bs( bv.begin(), bv.end() );

		set_difference(as.begin(), as.end(), bs.begin(), bs.end(), inserter(abs, abs.end()));
		set_difference(bs.begin(), bs.end(), as.begin(), as.end(), inserter(bas, bas.end()));
/*
		cout << "av is " << av.size() << "\n";	 sorted (a)
		cout << "bv is " << bv.size() << "\n";	 sorted (b)
		cout << "bs is " << bs.size() << "\n";   unique (b)
		cout << "bas is " << bas.size() << "\n"; differ (b-a)
*/
		for(i=0; i<bas.size(); ++i)
		{
			cnt += count (bv.begin(), bv.end(), bas[i]);
		}
		cout << (bv.size() - cnt) << "\n";
	}
	return 0;
}

/*
4
abc
abcdef
aA
abAZ
aaa
a
what
none

3
2
1
0
*/