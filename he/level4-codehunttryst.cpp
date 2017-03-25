// wrong incomplete
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,res=1;
    string s;
    cin >> s;
    n = s.length();
    long long a[n];
    memset(a, 0, sizeof a);
    
    for(i=0,j=0; i<n; ++i)
    {
        if( (s[i] == '0') || (s[i] == '1') || (s[i] == '2') || (s[i] == '3') || (s[i] == '4') ||
            (s[i] == '5') || (s[i] == '6') || (s[i] == '7') || (s[i] == '8') || (s[i] == '9') )
        {
            a[j] = s[i]-48;
            ++j;

        }
        //else
        //    ++j;
    }
    for(i=0; i<j; ++i)
    {
    	//cout << a[i] << "..\n";
        res *= a[i];
    }
    cout << res << "\n";
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

int main()
{
	ll i,ans=0;
	int mid=0;
	string s;
	cin >> s;
	if(s[0] == '-')
	{
		mid = s[1]-48;
		for(i=1; i<s.length(); ++i)
			mid = max(mid, s[i]-48);
		cout << "-" << mid << "\n";
	}
	else
	{
		mid = s[0]-48;
		for(i=0; i<s.length(); ++i)
			mid = max(mid, s[i]-48);
		cout << mid+1 << "\n";
	}
	return 0;
}*/