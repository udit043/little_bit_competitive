#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int sum[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    std::sort(a,a+n);

    for(int i=n-1; i>=0; i--)
    {
        sum[i]=a[i];
        sum[i] = a[i] * (n-i);
    }
    
    std::sort(sum,sum+n);
    cout << sum[n-1];
    cout << "\n";

    return 0;
}