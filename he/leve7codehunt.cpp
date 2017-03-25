// wrong incomplete
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

int main()
{
    string s, out;
    stringstream ss;
    getline(cin,s);
    ss<<s;

    ll f=1,b=1,c,i,shift;
    char small[26]=   { 'a','b','c','d','e','f','g','h','i','j',
                        'k','l','m','n','o','p','q','r','s','t',
                        'u','v','w','x','y','z' };
    char capital[26]= { 'A','B','C','D','E','F','G','H','I','J',
                        'K','L','M','N','O','P','Q','R','S','T',
                        'U','V','W','X','Y','Z' };
    while(ss>>out)
    {
        for(i=0; i<out.length(); ++i)
        {
            if((out[i]-65)>26)
            {
                c = out[i]-97;
                if(f == b)
                {
                    shift = c+f;
                    if(shift > 26)
                        shift = shift-26;
                    out[i]=small[shift];
                    ++f;
                }
                else if(f>b)
                {
                    shift = c-b;
                    if(shift < 0)
                        shift = shift+26;
                    out[i]=small[shift];
                    ++b;
                }
            }
            else
            {
                c = out[i]-65;
                if(f == b)
                {
                    shift = c+f;
                    if(shift > 26)
                        shift = shift-26;
                    out[i]=capital[shift];
                    ++f;
                }
                else if(f>b)
                {
                    shift = c-b;
                    if(shift < 0)
                        shift = shift+26;
                    out[i]=capital[shift];
                    ++b;
                }
            }
            cout << out[i];
        }
    }
    cout << "\n";
    return 0;
}








































/*// wrong incomplete
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,out;
    long long f=2,k1=1,k2=1;
    stringstream ss;
    getline(cin,s);
    ss<<s;

    while(ss>>out)
    {
		for(int i=0;i<out.length();i++)
        {
        	if(f == 2)
        	{
        	    if ('a'<=out[i] && out[i]<='z')
        	    {
        	    	int index = out[i];
        	    	if(index+k1 > 122)
        	    	{
        	    		index = index+k1-122;
        	    		index = index+97;
        	    		out[i] = out[index];
        	    	}
        	    	else
        	    		out[i] = out[index+k1];
        	    }
        	    else if ('A'<=out[i] && out[i]<='Z')
        	    {
        	        int index = out[i];
        	    	if(index+k1 > 122)
        	    	{
        	    		index = index+k1-90;
        	    		index = index+65;
        	    		out[i] = out[index];
        	    	}
        	    	else
        	    		out[i] = out[index+k1];
        	    }
        	    ++k1;
        	    f=1;
       		}
       		else
       		{
        	    if ('a'<=out[i] && out[i]<='z')
        	    {
        	    	int index = out[i];
        	    	if(index+k2 > 122)
        	    	{
        	    		index = index+k2-122;
        	    		index = index+97;
        	    		out[i] = out[index];
        	    	}
        	    	else
        	    		out[i] = out[index+k2];
        	    }
        	    else if ('A'<=out[i] && out[i]<='Z')
        	    {
        	        int index = out[i];
        	    	if(65 > index-k2)
        	    	{
        	    		index = index-k2-65;
        	    		index = 90+index;
        	    		out[i] = out[index];
        	    	}
        	    	else
        	    		out[i] = out[index-k2];
        	    }
        	    ++k2;
        	    f=2;
       		}
       	}
       	cout << out << " ";
    }
    cout << "\n";
    return 0;
}*/