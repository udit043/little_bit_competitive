#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int solve(int A, int B, int C, int D, int E)
{
    int i, j, k, wh, ri;
    for(i=1; i<C; i++)
    {
        k=0;
        wh = (A + i*D);
        ri = (B + (C-i)*E);
        if(wh == ri)
        {
            k=1;
            break;
        }
    }
    if(k == 1)
        return (C-i);
    else
        return -1;
}

int main()
{
    cout << solve(2, 8, 3, 7, 8);
    return 0;
}

/*string solve(string A, int B)
{
    string ans;
    B = B%26;
    int a[26] = { 0 };
    int i,j,k;
    
    for(i=0; i<A.length(); i++)
    {
        a[((int)A[i]-97)]++ ;
    }
    for(i=0; i<A.length(); i++)
    {
        j=((int)A[i]-97);

        if(a[j] & 1)
        {
            if(j >= B)
            {
                j = j-B;
                ans += (char)(j+97);
            }
            else
            {
                j = j-B;
                j = j + 26;
                ans += (char)(j+97);
            }
        }
        else
        {
            if(j+B <=25)
                ans += (char)(j+B+97);
            else
            {
                ans += (char)(j+B+97-26);
            }
        }
    }
    return(ans);
}

int main()
{
    cout << "hello\n";
    cout << solve("abccba", 2);
    cout << "\nhi\n";
    cout << solve("wvmctuj", 28);
    cout << "\nbye\n";
    return 0;
}*/

/*
string Solution::solve(int a, int b)
{
    int sum = a+b,mul = a*b,sub = a-b;
    float div = a/b;
    string s;
    
    if((a > 0) && (b > 0))
    {
          if(sum > mul)
          {
              s = "+";
          }
          else 
          {
              s = "*";
          }
    }
    else if ( (a<0) && (b<0))
    {
        if(mul > sub)
        {
            s = "*";
        }
        else 
        {
            s = "-";
        }
    }
    else
    {
        if(sum > sub)
        {
            s = "+";
        }
        else if(sum < sub)
        {
            s = "-";
        }
        else
        {
              s = "/";
          }
    }
      return s;
}*/