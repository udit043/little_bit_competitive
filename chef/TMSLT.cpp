// Wrong
#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define mod 1000000

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
		ll n, a, b, c, d, i, t1=0, t2=0;
		cin >> n >> a >> b >> c >> d;

		ll s[n];
		memset(s, 0, sizeof (s));

		s[0] = d;

		for(i=1; i<n; ++i)
		{
			s[i] = (s[i-1]*s[i-1]*a + b*s[i-1] + c) % mod;
//			s[i] = ( ( (((s[i-1]*s[i-1]*a) % mod) + ((b*s[i-1])%mod) ) + (c%mod) ) % mod );
		}
		sort(s, s+n);

		for(i=0; i<n; ++i)
		{
			cout << s[i] << " ";
			if(i & 1)
				t2 += s[i];
			else
				t1 += s[i];
		}
		cout << endl << abs(abs(t2) - abs(t1)) << "\n";
	}
	return 0;
}

/*
4
1 1 1 1 1
2 1 1 1 1
3 1 2 3 4
4 2 3 4 1

1
2
763
74896
*/