#include<stdio.h>
void main ()
{
	//Write a C program find the third angle of a triangle if two angles are given.
	
	int first,second,third;
	printf("enter the first angle ");
	scanf("%d,&first");
	
	printf("enter the second angle ");
	scanf("%d,&second");
	
	third=180-first-second;
	
	printf("the third is :%d ",third);
}
