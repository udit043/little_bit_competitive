#include <bits/stdc++.h>
using namespace std;
#define MAX 1000007
#define ll long long
ll p[MAX],c[MAX],g[MAX];

ll primefactors(ll n)
{
	if(g[n] != 0)
		return g[n];

	ll i,j,h,k,sum,size,number=n;
	size = sqrt(n);	
	memset(p, 0, sizeof p);
	memset(c, 0, sizeof c);
	// Print the number of 2s that divide n
	while (n%2 == 0)
	{
		p[2]=2;
		c[2]++;
		//printf("%d ", 2);
		n = n/2;
	}

	// n must be odd at this point.  So we can skip one element (Note i = i +2)
	for (i = 3; i <= size; i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			p[i]=i;
			c[i]++;
			//printf("%d ", i);
			n = n/i;
		}
	}
 
	// This condition is to handle the case whien n is a prime number
	// greater than 2
	if (n > 2)
	{
		p[n]=n;
		c[n]++;
		//printf ("%d ", n);
	}

	ll gcd[number+1];

	for (i = 1; i <= number; i++) 
		gcd[i] = 1;

	for (i = 0; i < number+1; i++)
	{
		if( (p[i] != 0) || (c[i] != 0) )
		{
			for (j = 0, h = p[i]; j < c[i]; j++, h *= p[i])
			{
				for (k = h; k <= number; k += h)
				{
					gcd[k] *= p[i];
				}
			}
		}
	}

	sum = 0;
	for (i = 1; i <= number; i++) 
		sum += gcd[i];
	g[number]=sum;
	//cout << "times\n";
	return sum;
}

int main()
{
	int g;
	//int g = primefactors(3);
	//cout << g << "\n";

	g = primefactors(40);
	cout << g << "\n";
	g = primefactors(4);
	cout << g << "\n";
	g = primefactors(40);
	cout << g << "\n";
	g = primefactors(3);
	cout << g << "\n";
	return 0;
}

/*void primeFactors(int n)
{
	int size = sqrt(n);
	
	memset(p, 0, sizeof p);
	memset(c, 0, sizeof c);
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
    	p[2]=2;
    	c[2]++;
        //printf("%d ", 2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= size; i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
        	p[i]=i;
        	c[i]++;
            //printf("%d ", i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    {
    	p[n]=n;
    	c[n]++;
        //printf ("%d ", n);
    }
}

int main()
{
    int n = 31;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 8;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 39;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 48;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 1000;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 125;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 136;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 24;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 99;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 81;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    printf("\n");
    n = 49;
    primeFactors(n);
    for(int i=0; i<=n; ++i)
    {
    	if( (p[i] != 0) || (c[i] != 0) )
    		cout << p[i] << "^" << c[i] << "\n";
    }
    return 0;
}*/