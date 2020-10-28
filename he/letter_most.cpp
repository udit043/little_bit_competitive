#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	int n, a[26]={0}, i, c=0;
	string s;
	cin >> n;
	cin >> s;
	for(i=0; i<s.length(); i++)
	{
		a[s[i]-97]++;
	}
	for(i=0; i<26; i++)
		c=max(c, a[i]);
	pd(c);
	return 0;
}

/*
7
vrowrqt

2
*/