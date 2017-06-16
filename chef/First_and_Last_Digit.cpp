#include <iostream>
int main()
{
	unsigned int i;
	std::string a;
	std::cin>>i;
	while((i>0)&&(i<=1000))
	{
		std::cin>>a;
		std::cout<<((a[0]+a[a.length()-1])-96);
		std::cout<<"\n";
		i--;
	}
	return 0;
}
