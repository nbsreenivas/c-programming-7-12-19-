#include <stdio.h>
int main()
{
	int r,i,n,sum=0;
	scanf("%d",&n);
	do
	{
		r=n%10;
		if(r%2==0)
		sum=sum+r;
		n=n/10;
		
	}while (n!=0);
	printf("%d",sum);
	

	return 0;
}
