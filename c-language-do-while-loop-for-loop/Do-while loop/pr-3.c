#include<stdio.h>
main()
{
	int i=1,j;
	printf("Enter the ending value:-");
	scanf("%d",&j); 
	 
	do{
		printf("% d",i);
		i++;
	}
	while(i<=j);
	
}