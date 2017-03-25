#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

long long int first(long long int arr[], long long int low, long long int high, long long int x, long long int n);
long long int last(long long int arr[], long long int low, long long int high, long long int x, long long int n);
long long int count(long long int arr[], long long int x, long long int n);

int main()
{
	long long int n,k,x,z=0,y=0,c,sum=0;
	cin >> n >> k;

	long long int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	std::sort(arr,arr+n);

	if( ( arr[n-1] + arr[n-2] ) < k )
	{
		sum = n * (n-1)/2;
	}

	else
	{
		for(int i=0; arr[i]<k; )
		{
			if( arr[i] + arr[i+1] >= k)
				break;

			if( i >= n )
				break;

			y = 0;
			x = arr[i];
			z++;
			c = count(arr, x, n); // count the number of occurence of an element

			for(int j=i+1; (arr[i]+arr[j]) < k ; j++ )
			{	
				if ( j >= n )
					break;

				y+=1;
			}

			if(y != 0)
				sum = sum + y*c - c*(c-1)/2;  // formula for evaluating pairs
		
			i = i + c; // increase the value of 'i' with the 'count'
		}
	}

	cout << sum << "\n";
	return 0;
}

// Geeks for Geeks : Count frequency of a number from sorted array

/* if x is present in arr[] then returns the index of FIRST occurrence 
   of x in arr[0..n-1], otherwise returns -1 */
long long int first(long long int arr[], long long int low, long long int high, long long int x, long long int n)
{
  if(high >= low)
  {
    long long int mid = (low + high)/2;  /*low + (high - low)/2;*/
    if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
      return mid;
    else if(x > arr[mid])
      return first(arr, (mid + 1), high, x, n);
    else
      return first(arr, low, (mid -1), x, n);
  }
  return -1;
}

/* if x is present in arr[] then returns the index of LAST occurrence 
   of x in arr[0..n-1], otherwise returns -1 */ 
long long int last(long long int arr[], long long int low, long long int high, long long int x, long long int n)
{
  if(high >= low)
  {
    long long int mid = (low + high)/2;  /*low + (high - low)/2;*/
    if( ( mid == n-1 || x < arr[mid+1]) && arr[mid] == x )
      return mid;
    else if(x < arr[mid])
      return last(arr, low, (mid -1), x, n);
    else
      return last(arr, (mid + 1), high, x, n);      
  }
  return -1;
}

/* if x is present in arr[] then returns the count of occurrences of x, 
   otherwise returns -1. */
long long int count(long long int arr[], long long int x, long long int n)
{
  long long int i; // index of first occurrence of x in arr[0..n-1]
  long long int j; // index of last occurrence of x in arr[0..n-1]
    
  /* get the index of first occurrence of x */
  i = first(arr, 0, n-1, x, n);

  /* If x doesn't exist in arr[] then return -1 */
  if(i == -1)
    return i;
   
  /* Else get the index of last occurrence of x. Note that we 
      are only looking in the subarray after first occurrence */   
  j = last(arr, i, n-1, x, n);     
   
  /* return count */
  return j-i+1;
}