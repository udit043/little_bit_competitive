#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int weight[100], profit[100], dif[100], a[100][100];
void knapsack(int bag, int max_weight);

int main()
{
	int i, j, bag, max_weight, k, l, m, n, o, p;
	cout << "Enter number of bag ";
	sd(bag);
	cout << "Enter weight of bag ";
	for(i=1; i<=bag; i++)
		sd(weight[i]);
	cout << "Enter profit of bag ";
	for(i=1; i<=bag; i++)
		sd(profit[i]);
	cout << "Max weight of knapsack ";
	sd(max_weight);
	for(i=0, j=0; i<=bag; i++, j++)
	{
		dif[j]=weight[i];
		j++;
		dif[j]=profit[i];
	}
	sort(weight, weight+bag);
	for(i=0; i<=bag; i++)          // sorting profit according to weight
	{
		for(j=0; j<=bag*2; j+=2)
		{
			if(weight[i] == dif[j])
			{
				dif[j]=-1;
				j++;
				profit[i]=dif[j];
				break;
			}
		}
	}
	knapsack(bag, max_weight);
	cout << "Max Profit in bag " << a[bag][max_weight] << "\n";
	return 0;
}

void knapsack(int bag, int max_weight)
{
	int i, j, k, l, m, n;
	for(i=0; i<=bag; i++)
	{
		for(j=0; j<=max_weight; j++)
		{
			if(i == 0)
				a[i][j]=0;
			else
			{
				if(j < weight[i])
					a[i][j] = a[i-1][j];
				else
				{
					a[i][j] = max(a[i-1][j], a[i-1][j-weight[i]] + profit[i]);
				}
			}
		}
	}
}

/*
4
3 4 5 6
2 3 4 1
8

6
*/

/*
	for(i=0; i<=bag; i++)
	{
		for(j=0; j<=max_weight; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
*/