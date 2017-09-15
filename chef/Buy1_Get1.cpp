#include <iostream>
int main() 
{
	unsigned int i,k,j;
	int pos;
	std::string a;
	std::cin>>i;
	while((i>0)&&(i<=100))
	{
		std::cin>>a;
		j=0;
		if((a.length()>=1)&&(a.length()<=200))
		{
			for(k=0;k<=a.length()-1;k++)
			{
				j=j+1;
				pos=a.find(a[k],k+1);				
				if(pos!=-1)
				{
					a.erase(pos,1);
				}
			}
		}
		std::cout<<j<<"\n";
		i--;
	}
	return 0;
}
