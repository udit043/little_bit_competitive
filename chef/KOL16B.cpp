#include <bits/stdc++.h>
using namespace std;

int encodeInteger(int x, int n)
{
	n = n<<(1<<(1<<(1<<1)));
	x = x | n;
	return x;
}
int decodeInteger(int x, int n)
{
	n = n<<(1<<(1<<(1<<1)));
	x = x | n;
	return x;
}
void encodeArray(int *A, int *B, int n)
{
	for(int i=0;i<n;i++) 
	{
    	A[i] = encodeInteger(A[i], B[i]);
	}
}

void encodeArray(int *A, int n)
{
	for(int i=0;i<n;i++) 
	{
    	A[i] = decodeInteger(A[i], B[i]);
	}
}

int main()
{
	int a[4],b[3];
	for(int i=0; i<4; i++)
		cin >> a[i];
	for(int i=0; i<4; i++)
		cin >> b[i];
	encodeArray(a,b,4);
	for(int i=0; i<4; i++)
		cout << a[i] << " ";
	cout << "\n";
	return 0;
}