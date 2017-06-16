#include <bits/stdc++.h>

#define gc getchar

using namespace std;


 int read(void) {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
   int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

int main()
{
	int t,a=0;
	t = read();
	while(t--)
	{
		int n;
		n = read();
		
		long long m,r;

		m = n%9 + 1;
		cout << m <<"\n" ;
	}
	return 0;
}