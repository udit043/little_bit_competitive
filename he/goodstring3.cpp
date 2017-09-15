#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	int ans[26], unique=0;
	memset(ans, 0, sizeof ans);
	for(long i=0; i<s.length(); i++)
	{
		int y = (int)s[i] - 97;
	//	cout << y << "\n";
		ans[y] = 1;
	}
	for(int i=0; i<26; i++)
		if(ans[i] == 1)
			unique++;
	cout << s.length() - unique << "\n";
	return 0;
}