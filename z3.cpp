#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

/*int AbsDiff(long long int a[], long long int n)
{
  if ( n < 2 ) return 0;
  sort(a,a+n);     
  long long int sum = 0;
  long long int i;
  for(i=n-1;i>=0;i--)
  {
    sum += (a[i]*(i) - a[i]*(n-i-1));
  }
  return sum;
}*/

int main()
{
	long long int n,i;
	cin >> n;
	long long int a[n],p=0;
	
	for ( i = 0 ; i < n ; i++ )
		cin >> a[i];

	sort(a,a+n);     
 
  	for(i=n-1;i>=0;i--)
  	{
    	p += (a[i]*(i) - a[i]*(n-i-1));
  	}
	cout << p << "\n";

	return 0;
}