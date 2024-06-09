#include<stdio.h>
main()
{
	int i,j;
	printf("Enetr ending value:-");
	scanf("%d",&j);

	while(i <= j)
	{
		if(j % 2 == 1){
			printf("% d",j);
		}
		j--;
	
	}
}
