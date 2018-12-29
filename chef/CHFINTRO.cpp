#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,r,t;
	cin >> n >> r;
	while(n--)
	{
		cin >> t;
		if(t<r)
			printf("Bad boi\n");
		else
			printf("Good boi\n");
	}
	return 0;
}