// incomplete 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t, fl=0;
	ll c, s, i, j, k, cc, s_mil, sw, l;
	sd(t);

	for(j=1; j<=t; ++j)
	{
		c=1; s=0, cc=0, fl=0, s_mil=0, sw=0;
		ll d;
		sll(d);
		string p;
		cin >> p;
		for(i=0; i<p.length(); ++i)
		{
			if(p[i] == 'S')
			{
				s = s + c;
			}
			else
			{
				if(i != 0)
					c = 2*c;
				++cc;
			}
		}
//		if(s > d)
//		{
//			printf("Case #%d: IMPOSSIBLE\n", j);
//		}
		if(s < d)
		{
			printf("Case #%d: 0\n", j);
		}
		else
		{
			//for(k=1; k<=cc; ++k)
			{
				//cout << "aya\n";

				for(i=p.length()-1; i>=0; --i)
				{	
					//cout << ".\n";
					if(p[i] == 'S')
					{
						//cout << "aya\n";
						s_mil = 1;
					//	cout << "cont " << i << "\n";
						continue;
					}

					if(s_mil == 1)
					{
						//cout << p << "\n";
						//cout << "aya1 .. "; cout << i << "\n";
						//c=1; s=0; cc=0;
						s_mil = 0;

						if(p[i] == 'C')
						{	
						//	cout << "han " << p << " .. " << i << " , " << i+1 << "\n";
							c=1; s=0; cc=0;
							//cout << "aya\n";
							p[i] = 'S';
							p[i+1] = 'C';
							cout << p << "\n";
						//	cout << "re " << p << " .. " << i << " , " << i+1 << "\n";
							++sw;

							for(l=0; l<p.length(); ++l)
							{
								if(p[l] == 'S')
								{
									s = s + c;
								}
								else
								{
									if(l != 0)
									c = 2*c;
									++cc;
								}
								//cout << "ss\n";
							}

							if(s <= d)
							{
								printf("Case #%d: %d\n", j, sw);
								fl=1;
								break;
							}
							//break;
							i=p.length()-1;
						}
					}
				}

//				if(s <= d)
//				{
//					printf("Case #%d: %d\n", j, k);
//					fl=1;
//					break;
//				}
			}
			if(fl == 0)
			{
				//cout << p << "\n";
				printf("Case #%d: IMPOSSIBLE\n", j);
			}
		}
	}
	return 0;
}