#include <bits/stdc++.h>
using namespace std;

void f(int *p, int *q)
{
	p=q;
	*p=2;
}

int i=0, j=1;

int main()
{
	f(&i, &j);
	cout << i << " " << j << "\n";
	return 0;
}