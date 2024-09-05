#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int i = 2;
    do
	{
        if (i <= n) 
		{
            printf("%d ", i);
        }
        i += 2; 
    } while (i <= n);
    
    printf("\n"); 
   
}
