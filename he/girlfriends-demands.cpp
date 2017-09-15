#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s; long long int q,a,b;
	cin >> s >> q;
	while(q--)
	{
		cin >> a >> b;
		a = a%s.length();
		b = b%s.length();
		if(a == 0)
			a = s.length();
		if(b == 0)
			b = s.length();
		a--;b--;

		if(s[a] == s[b])
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}