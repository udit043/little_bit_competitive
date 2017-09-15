#include <bits/stdc++.h>
using namespace std;

void subset_char(char a[], int n)
{
	for(int i=0; i < (1 << n); ++i)
	{
		for(int j=0; j < n; ++j)
		{
			if( i & (1 << j) )
				cout << a[j] << " ";
		}
		cout << "\n";
	}
}

void subset_string(string s, int n)
{
	for(int i=0; i < (1 << n); ++i)
	{
		for(int j=0; j < n; ++j)
		{
			if( i & (1 << j) )
				cout << s[j] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		subset_string(str, str.length());
		//char c[] = {'a', 'b', 'c'};
		//subset_char(c,3);
	}
	return 0;
}