#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int a[100][100], ans[100], first_len, second_len, len, i, j;
string first, second;

void lcs();
void subsequences(int first_len, int second_len);

int main()
{
	cout << "Enter First sequene \n";
	cin >> first;
	cout << "Enter Second sequene \n";
	cin >> second;
	lcs();
	len = a[first_len][second_len];
	cout << "Length of subsequence is " << len << "\n";
	if(len > 0)
	{
		cout << "subsequences are: ";
		subsequences(first_len, second_len);
	}
	return 0;
}

void lcs()
{
	first_len = first.length();
	second_len = second.length();

	for(i=0; i<=first_len; i++)
	{
		for(j=0; j<=second_len; j++)
		{
			if((i == 0) || (j == 0))
				a[i][j]=0;
			else
			{
				if(first[i-1] == second[j-1])
				{
					a[i][j] = 1 + a[i-1][j-1];
				}
				else
					a[i][j] = max(a[i-1][j], a[i][j-1]);
			}
		}
	}
}

void subsequences(int first_len, int second_len)
{
	if((first_len == 0) && (second_len == 0))
		return;

	if(first[first_len-1] == second[second_len-1])
	{
		subsequences(first_len-1, second_len-1);
		cout << first[first_len-1];
		//cout << first[first_len-1] << " match hua Diagonal\n";	
	}
	else if(a[first_len][second_len] == a[first_len-1][second_len])
	{
		//cout << "Left ja rhe\n";
		subsequences(first_len-1, second_len);
	}
	else if(a[first_len][second_len] == a[first_len][second_len-1])
	{
		//cout << "Upar ja rhe\n";
		subsequences(first_len, second_len-1);
	}
}

/*
abaaba
babbab

baba
baab
*/

/*
	for(i=0; i<=first_len; i++)
	{
		for(j=0; j<=second_len; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
*/