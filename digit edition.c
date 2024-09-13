#include<stdio.h>
void main ()
{
	int n;
	printf (" enter n ");
	scanf ("%d",&n);

	int ld=n%10;
	while (n>9)
	{
		n=n/10;
		
	}
	printf("first digit %d\n");
	
	printf("last digit %d\n");

	printf("sum %d",n+ld);
	
}
