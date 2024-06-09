#include<stdio.h>
main()
{
	int i,j;
	
	printf("Enetr starting value:-");
	scanf("%d",&i);
	printf("Enetr ending value:-");
	scanf("%d",&j);

	printf("\n");

	while(i <= j)
	{
		if(i % 4 ==0){
			printf("% d",i);
		}
		i++;
		printf("\n");
	}
}
