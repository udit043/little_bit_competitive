#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	a=b=1;
	int *ptr;
	a=0;
	ptr=&a;
	b=0;
	*ptr=1;
	cout << a << " " << b << "\n";
	return 0;
}