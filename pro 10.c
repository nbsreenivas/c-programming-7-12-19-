#include <stdio.h>
int main()
{
int n,i,r,sum=0,num;
scanf("%d",&n);
num=n;
while (n!=0)
{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;
}
if (num==sum)
printf("its a astrong number");
else 
printf("its not a amstrong numder");
return 0;
}
