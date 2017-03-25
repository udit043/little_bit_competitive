#include <bits/stdc++.h>
using namespace std;

int replacements(string s) ;

// A utility function to find minimum of two integers
int min(int a, int b)
{   return a < b ? a : b;  }
 
// A DP function to find minimum number of insersions
int findMinInsertionsDP(char str[], int n)
{
    // Create a table of size n*n. table[i][j] will store
    // minumum number of insertions needed to convert str[i..j]
    // to a palindrome.
    int table[n][n], l, h, gap;
 
    // Initialize all table entries as 0
    memset(table, 0, sizeof(table));
 
    // Fill the table
    for (gap = 1; gap < n; ++gap)
        for (l = 0, h = gap; h < n; ++l, ++h)
            table[l][h] = (str[l] == str[h])? table[l+1][h-1] :
                          (min(table[l][h-1], table[l+1][h]) + 1);
 
    // Return minimum number of insertions for str[0..n-1]
    return table[0][n-1];
}

int main()
{
	string s;
	cin >> s;
	cout << replacements(s) << "\n";
	return 0;
}



int replacements(string s) 
{
	int ans;
	string a=s;

	for(int i=0; i<a.length(); i++)
	{
		if(a[i] == 'l')
		{
			if(a[i+1] == 'i')
			{
				if(a[i+2] == 'n')
				{
					if(a[i+3] == 'k')
					{
						if(a[i+4] == 'e')
						{
							if(a[i+5] == 'd')
							{
								if(a[i+6] == 'i')
								{
									if(a[i+7] == 'n')
									{

									}
								}
							}
						}
					}
				}
			}
		}
		//***************************************************
		else if(a[i+1] == 'i')
		{
			if(a[i+1] == 'n')
			{
				if(a[i+1] == 'k')
				{
					if(a[i+1] == 'e')
					{
						if(a[i+1] == 'd')
						{
							if(a[i+1] == 'i')
							{
								if(a[i+1] == 'n')
								{

								}
							}
						}
					}
				}
			}
		}
		//***************************************************
		else if(a[i+1] == 'n')
		{
			if(a[i+1] == 'k')
			{
				if(a[i+1] == 'e')
				{
					if(a[i+1] == 'd')
					{
						if(a[i+1] == 'i')
						{
							if(a[i+1] == 'n')
							{

							}
						}
					}
				}
			}
		}
		//***************************************************
		else if(a[i+1] == 'k')
		{
			if(a[i+1] == 'e')
			{
				if(a[i+1] == 'd')
				{
					if(a[i+1] == 'i')
					{
						if(a[i+1] == 'n')
						{

						}
					}
				}
			}
		}
		//***************************************************
		else if(a[i+1] == 'e')
		{
			if(a[i+1] == 'd')
			{
				if(a[i+1] == 'i')
				{
					if(a[i+1] == 'n')
					{

					}
				}
			}
		}
		//***************************************************
		else if(a[i+1] == 'd')
		{
			if(a[i+1] == 'i')
			{
				if(a[i+1] == 'n')
				{

				}
			}
		}
		//***************************************************
		

	}
	return ans;
}