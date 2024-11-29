#include<stdio.h>
int main()
{
	int n,i,j;
	long long s = 0;
	scanf("%d",&n);
	for(i = 0;i < n;++i)
	{
		scanf("%d",&j);
		s += j;
	}
	printf("%lld\n",s);
	return 0;
}