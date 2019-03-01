#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll a[26];
int main()
{
	int t, i, j;
	string s;
	sd(t);
	while(t--)
	{
		fill_n(a, 26, 0);
		cin >> s;
		for(i=0; i<s.length(); ++i)
		{
			a[(int)s[i]-65] += 1;
		}
		for(i=0; i<26; ++i)
			cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}

/*
if __name__ == "__main__":
  for j in range(int(input())):
    S = str(input())
    N = len(S)
    A = [0]*27
    for c in S:
      A[ord(c) - 65] = A[ord(c) - 65] + 1
    A = sorted(A,reverse=True)
    minSwap = N + 1
    for i in range(1,27):
      if N%i == 0:
        temp = N//i
        tempSwap = 0
        for f in range(i):
          if temp > A[f]:
            tempSwap = tempSwap + temp - A[f]
        if tempSwap <= minSwap:
          minSwap = tempSwap
    if minSwap == N+1:
        minSwap = 0
    print(minSwap)

2
ABCB
BBC

*/