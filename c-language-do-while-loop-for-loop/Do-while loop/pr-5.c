#include<stdio.h>
main()
{
	int i,j;
	printf("Enter the starting value:-");
	scanf("%d",&i); 
	 
	printf("Enter the ending value:-");
	scanf("%d",&j); 
	 
	printf("\n"); 
	do{
		if(i%4==0){
			printf("% d",i);
		}
		i++;
		printf("\n"); 
	}
	while(i<=j);
	
}