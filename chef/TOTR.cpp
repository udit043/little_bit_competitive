#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, i, j;	string s1, s2;
	sd(t);	cin >> s1;
	while(t--)
	{
		cin >> s2;
		for(i=0; i<s2.length(); i++)
		{
			j = (int)s2[i];
			if(j == 95)
				printf(" ");
			else if(j == 46)
				printf(".");
			else if(j == 44)
				printf(",");
			else if(j == 33)
				printf("!");
			else if(j == 63)
				printf("?");
			else if(j < 91)
			{
				j -= 65;
				if(!((int)s1[j] < 91))
				{
					cout << (char)((int)s1[j]-32);
				}
				else
				{
					cout << s1[j];
				}
			}
			else
			{
				j -= 97;
				if((int)s1[j] < 91)
				{
					cout << (char)((int)s1[j]+32);
				}
				else
				{
					cout << s1[j];
				}
			}
		}
		printf("\n");
	}
	return 0;
}

/*
5 qwertyuiopasdfghjklzxcvbnm
Ph
Pcssi
Bpke_kdc_epclc_jcijsc_mihyo?
Epcf_kdc_liswhyo_EIED_hy_Vimcvpcn_Zkdvp_siyo_viyecle.
Ipp!

Hi
Hello
What are these people doing?
They are solving TOTR in Codechef March long contest.
Ohh!

*/



/*
qwertyuiopasdfghjklzxcvbnm
QWERTYUIOPASDFGHJKLZXCVBNM
*/