#include<stdio.h>
void main ()
{
	int n,i,f=1;
	printf (" enter a number ");
	scanf ("%d",&n);
    do 
	{
		f=f*n;
		n--;
		
	} 
	while (n>=1);
	printf("factorial is %d",f);
}
