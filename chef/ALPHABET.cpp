#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int n,f=0;
	cin >> n;
	while(n--)
	{
		string w;
		cin >> w;
		for(int i=0; i<w.length(); i++)
		{
			std::size_t found = s.find(w[i]);
			if(found != std::string::npos)
				f = 1;
			else
				f = 0;
			if(f == 0)
			{
				cout << "No\n";
				break;
			}
		}
		if(f == 1)
			cout << "Yes\n";
	}
	return 0;
}