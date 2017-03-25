#include <bits/stdc++.h>
using namespace std;

unsigned int gcd(unsigned int u, unsigned int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned int n;
		cin >> n;
		int a[n];

		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			if(a[i] == 1)
			{
				i--;
				n--;
			}
		}
		for(int i=0; i<n; i++)
			cout << a[i] << " ";
		cout << "\n";
		/*sort(a,a+n);
		for(int i=0; i<n; i++)
		{
			if(a[i] != 0)
			{
				
			}
		}*/
	}
	return 0;
}

/*
int main()
{
	unsigned int t;
	cin >> t;
	while(t--)
	{
		unsigned int n;
		cin >> n;

		unsigned int a[n],ans[n-1],max=0,e;

		for(int i=0; i<n; i++)
			cin >> a[i];

		for(int i=0; i<n-1; i++)
		{
			e=i;
			ans[i]=0;
			for(int y=i+1; y<n; y++)
			{
				unsigned gc = gcd(a[e], a[y]);
				if(gc > 1)
				{
					ans[i] += 1;
					e = y;
				}
				else
				{
				
				}
			}
			if(max < ans[i])
				max = ans[i];

			cout << "i hai " << i << "\n";
		}
		cout << max << "\n";
	}
	return 0;
}*/

/*
13 2 8 6 3 1 9
*/

/*
for(int i=0; i<n-1; i++)
{
	unsigned int g = gcd(a[i],a[i+1]);
	if(g > 1)
		ans += 1;
}
cout << ans << "\n";
*/