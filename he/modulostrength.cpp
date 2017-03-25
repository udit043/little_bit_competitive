// code golf
#include <iostream>
long n,k,a,g,b[100001],p=100001;
main()
{
	std::cin>>n>>k;
	while(n--)
	{
		std::cin>>a;
		++b[a%k];
	}
	while(p--)
		g+=b[p]*(b[p]-1);
	std::cout<<g;
}