#include <cstdio>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 1; i<=2*n; i += 2)
			printf("%d ", i);
		printf("\n");
	}
	return 0;
}