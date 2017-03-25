#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n,k,res=0,f;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	f = a[k-1];
	for(int i=0; i<n; i++)
	{
		if( (a[i] >= f ) && (a[i] > 0) )
			res++;
	}
	cout << res << "\n";
	return 0;
}