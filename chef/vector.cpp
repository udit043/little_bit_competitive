#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll n, k, k1, i, rank, arr[mx], arr1[mx];
int main() 
{
    rank =0;
    vector< pair <ll,ll> > vect;

    sll(n); sll(k);

    for(i=0; i<n; i++)
        sll(arr[i]);
    for(i=0; i<n; i++)
        sll(arr1[i]);

    for (i=0; i<n; i++) 
        vect.push_back( make_pair(arr[i],arr1[i]) ); 
  
    sort(vect.begin()+1, vect.end()); 

    i=1;
    while(k--)
    {
        vect[n-i].first = vect[n-i].first - vect[n-i].second;
        ++i;
    }

    k = vect[0].first;
    k1 = vect[0].second;
    sort(vect.begin(), vect.end());
    for(i=n-1; i>=0; i--)
    {
        if((vect[i].first == k) && (vect[i].second == k1))
            break;
        else
            rank++;

    }
    pll(rank+1);
    return 0; 
}

/*
4 2
10 5 11 13
2 3 3 2

2
*/