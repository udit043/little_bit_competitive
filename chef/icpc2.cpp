#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a,a+n);
	
	int q;
	cin >> q;
	
	for(int i = 1; i < n; i++)
		a[i] = a[i] + a[i-1];

	while(q--)
	{
		int k;
		cin >> k;
		cout << a[n-k-1] << "\n";
	}
	
	return 0;
}