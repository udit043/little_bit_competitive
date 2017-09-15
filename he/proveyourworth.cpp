// wrong incomplete

#include <bits/stdc++.h>
using namespace std;
long long int a[1000004];
long long int b[1000004];
long long i,sum=0;
//static inline int is_odd_A(int x) { return x & 1; }
void com()
{
	sum = 0;
	for(i=1; i<=1000003; ++i)
	{
		//cout << i << "\n";
		if(i%2 != 0)
			a[i] = i;
		else
			a[i] = a[i/2];
		b[1]=a[1];
	}
	//cout << "hi";
}

int main()
{
	com();
	long long q;
	cin >> q;
	while(q--)
	{
		long long l,r;
		cin >> l >> r;
		//for(i=l; i<=r; ++i)
			sum = b[r]^b[l-1];
		cout << sum << "\n";
	}
	return 0;
}



/*long long int ans(long long int x)
{
	if(x%2 != 0)
	{
		a[x] = x;
		return x;
	}
	else
	{
		if(a[x/2] == 0)
			return ans(x/2);
		else
			return a[x/2];
	}
}*/

/*
		for(i=l; i<=r; ++i)
		{
			if(i%2 != 0)
				a[i]=i;//sum ^= i;//cout << i << "\n";
			else
			{
				//sum ^= ans(i/2);//cout << ans(i/2) << "\n";
				if(a[i/2] != 0)
					a[i] = a[i/2];
				else
					a[i] = ans(i/2);
			}
		}
		for(i=l; i<=r; ++i)
			sum ^= a[i];
		cout << sum << "\n";
*/