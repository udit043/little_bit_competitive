//incomplete
#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int prime[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
int one[10]={1, 11, 13, 17, 19, 31, 41, 61, 71, 91};
int n, i, j, k, ans=0, a[101], divi[101];
	

void primeFactors(int n)  
{  
	// Print the number of 2s that divide n  
	while(n % 2 == 0)  
	{
		a[2]++;
		n = n/2;
	}
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
	for(k = 3; k <= sqrt(n); k = k + 2)  
	{
		// While i divides n, print i and divide n  
		while(n % k == 0)  
		{
			a[k]++;
			n = n/k;  
		}
	}
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
	if(n > 2)
	{
		a[n]++;
	}
}  

int main()
{
	for(i=0; i<25; i++)
	{
		divi[prime[i]] = 1;
	}
	for(i=0; i<10; i++)
	{
		divi[one[i]] = -1;
	}

	divi[1]=0;
	
	for(i=2; i<=12; i++)
	{
		for(j=0; j<=100; j++)
		{
			a[j]=0;
		}
		if(divi[i] == 0)
		{
			primeFactors(i);
			for(j=0; j<=100; j++)
			{
				cout << a[j];
			}
		}
		cout << "\n";
	}

	return 0;
}

/*
int main()
{
	int prime[21]={11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	int n, i, j, k, ans=0, a[101], div[101]={0};
	
	div[1]=0;
	div[2]=div[3]=div[5]=div[7]=1;
	div[4]=div[9]=2;
	div[6]=3;
	div[8]=4;

	for(i=10; i<=44; i++)
	{
		if(div[i] == 0)
		{
			ans=0;
			for(j=2; j<i; j++)
			{
				cout << "i @@ = "<<i<<", "<<j<<"\n";
				if((i%j == 0) && (j <= i/j))
				{
					cout<<"i.. = "<<i<<", "<<j<<"\n";
					if((div[j] != 0) && (div[i/j] != 0))
					{
						cout<<"i = "<<i<<", "<<j<<"\n";
						ans += div[j];
						if(j != i/j)
							ans += div[i/j];
						cout << "hi" << ans << "\n";
					}
					//cout << ans << "\n";
				}
			}
			div[i] = ans;
		}
	}
	sd(n);
	cout << div[n] << "\n";
	cout << div[2] << "\n";
	cout << div[3] << "\n";
	cout << div[4] << "\n";
	cout << div[6] << "\n";
	cout << div[8] << "\n";
	cout << div[12] << "\n";
	cout << div[24] << "\n";
	cout << div[25] << "\n";
	return 0;
}


*/