#include<stdio.h>
main()
{
	int i=1,j;
	printf("Enter the starting value:-");
	scanf("%d",&j); 
	 
	do{
		printf("% d",j);
		j--;
	}
	while(i<=j);
	
}