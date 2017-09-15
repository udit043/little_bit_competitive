// Wrong
#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
ll a[mx];

int main()
{
	int t, i, k;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		bool fl=false;
		string s;
		getline(cin, s);
		
		for(i=0; i<s.length(); ++i)
		{
			k = (int)s[i];
//			cout << s[i] << " : " << k << " .... \n";
			if( (k >= 65 && k <= 90) || (k >= 97 && k <= 122 ) )
			{
				fl = true;
				cout << s[i] << "\n";
				break;
			}
		}
		if(fl == false)
			cout << "~\n";
	}
	return 0;
}

/*
4
Father, what is the lack of logic?
Where?
The quick brown fox jumps over the lazy dog.
!!!

*/