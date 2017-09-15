#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		bool flag = false;
		ll oa, ob, oc, a, b, c, x;
		cin >> oa >> ob >> oc >> x;

		unsigned ll aa[3];

		if(flag == false)
		{
			// a+x		b+x		c
			a = oa;		b = ob;		c = oc;
			/*if(signbit(a) == signbit(x))
				a = abs(a) + abs(x);
			else
				a = abs(abs(a) - abs(x));

			if(signbit(b) == signbit(x))
				b = abs(b) + abs(x);
			else
				b = abs(abs(b) - abs(x));*/

			a += x;
			b += x;

			aa[0] = a;
			aa[1] = b;
			aa[2] = c;

			sort(aa, aa+3);

			if( (aa[2]*aa[2]) == ((aa[1]*aa[1]) + (aa[0]*aa[0])) )
				flag = true;

			//cout << "haan1\n";
		}

		if(flag == false)
		{
			// a+x		b		c+x
			a = oa;		b = ob;		c = oc;
			/*if(signbit(a) == signbit(x))
				a = abs(a) + abs(x);
			else
				a = abs(abs(a) - abs(x));

			if(signbit(c) == signbit(x))
				c = abs(c) + abs(x);
			else
				c = abs(abs(c) - abs(x));*/

			a += x;
			c += x;

			aa[0] = a;
			aa[1] = b;
			aa[2] = c;

			sort(aa, aa+3);

			if( (aa[2]*aa[2]) == ((aa[1]*aa[1]) + (aa[0]*aa[0])) )
				flag = true;

			//cout << "haan2\n";
		}

		if(flag == false)
		{
			// a		b+x		c+x
			a = oa;		b = ob;		c = oc;
			/*if(signbit(b) == signbit(x))
				b = abs(b) + abs(x);
			else
				b = abs(abs(b) - abs(x));

			if(signbit(c) == signbit(x))
				c = abs(c) + abs(x);
			else
				c = abs(abs(c) - abs(x));*/
			b += x;
			c += x;

			aa[0] = a;
			aa[1] = b;
			aa[2] = c;

			sort(aa, aa+3);

			if( (aa[2]*aa[2]) == ((aa[1]*aa[1]) + (aa[0]*aa[0])) )
				flag = true;

			//cout << "haan3\n";
		}

		if(flag == true)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}