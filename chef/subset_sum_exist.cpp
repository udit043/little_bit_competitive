#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int size, sum, sets[100], a[100][100], ans[100], b[100];
void subset_sum_exist(int size, int sum);
void print_subset(int size, int sum);

int main()
{
	int i, j;
	cout << "Enter size of set ";
	sd(size);
	cout << "Enter elements of set ";
	for(i=0; i<size; i++)
		sd(sets[i]);
	cout << "Required sum from the subset ";
	sd(sum);
	sort(sets, sets+size);
	subset_sum_exist(size, sum);

	for(i=0; i<size; i++)
	{
		for(j=0; j<=sum; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}

	if((a[size-1][sum]) == 1)
	{
		printf("Yes subset exist\n");
		print_subset();
	}
	else
		printf("No subset do not exist\n");
	return 0;
}

void subset_sum_exist(int size, int sum)
{
	int i, j;
	for(i=0; i<size; i++)
	{
		for(j=0; j<=sum; j++)
		{
			if(j == 0)
				a[i][j]=1;
			else if((i == 0) && (sets[i] == j))
				a[i][j]=1;
			else if(a[i-1][j] == 1)
				a[i][j]=1;
			else
			{
				if(j < sets[i])
					a[i][j] = a[i-1][j];
				else if(sets[i] == j)
					a[i][j] = 1;
				else
					a[i][j] = a[i-1][j-sets[i]];
			}
		}
	}
}

void print_subset(int size, int sum)
{
	int i, j, k, sum_left;
	for(i=size-1; i>=0; i--)
	{
		k=0;
		sum_left = sum;
		if(a[i][sum_left] == 1)
		{
			b[k] = i;
			sum_left = sum - i;
			for(j=i-1; j>=0; j--)
			{
				if(a[j][sum_left] == 1)
			}
		}
	}
}

/*
5
2 3 5 7 10
14

Yes subset exist


4
2 3 5 7
13

No subset do not exist
*/
/*
	for(i=0; i<size; i++)
	{
		for(j=0; j<=sum; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
*/
