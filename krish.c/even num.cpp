#include<stdio.h>


int main ()
{
	int i,n;
    scanf("%d",&n);
    printf("all even number from 1 to %d are : \n",n);
    
    i=1; 
    
	while(i<=n)
	{
	 if (i%2==0)
	 { 
	 printf(" %d\n ",i);
		 }	

       i++;
		
	}
	return 0;
	
}