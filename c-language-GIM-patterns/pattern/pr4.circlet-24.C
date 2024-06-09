  	     5
       5 4 5
     5 4 3 4 5
   5 4 3 2 3 4 5
 5 4 3 2 1 2 3 4 5
#include<stdio.h>
 main()
{
	int i,j,k,l;

	for(i=5;i>=1;i--)
	{
		for(k=5-i;k<=5;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)

		{
			printf("%d ",j);
		}
		for(l=4;l>=i;l--)
		{
			printf("");
		}
		for(j=i+1;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
