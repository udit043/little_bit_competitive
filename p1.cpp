#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while ( t-- )
	{
		string s,s1;
		long long int k,len=0,p=0,o=0,ans=0;
		int in[26];
		cin >> s >> k;
		len = s.length();
		sort( s.begin() , s.end() );

		for(int i = 0; i < len ; i++ )
		{
			int n = s.find_last_of(s[i]);
			p = n-i+1;
			if ( n != i )
			{
				i = n;
			}
			in[o] = p;
			o++;
		}
		int pi=0;
		//sort(in,in+o);

		for(int i = 0; i<o; i++ )
		{
			if( in[i] >= k )
			{
				in[i] = in[i] - k;
				ans += 1;
			}

			if( in[i] >= 1 )
			{
				in[i] = in[i] - 1;
				pi=pi+1;

				if( pi >= k )
				{
					ans += 1;
					pi = 0;
				}
			}
		}

		ans = ans + pi;
		cout << ans << "\n";
	}
	return 0;
}