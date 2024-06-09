#include<stdio.h>
main()
{
	int i,j;
	printf("Enter the starting value:-");
	scanf("%d",&i);
	printf("Enter the ending value:-");
	scanf("%d",&j);
	
	
	for(i=2020;i<=j;i++)
	{
		if(i%4==0){
			printf("% d",i);
		}
	}
}