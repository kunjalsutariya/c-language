#include<stdio.h>
main()
{
	int i,j,sum=0,cube;
	printf("Enetr any num:-");
	scanf("%d",&i);

	for(j=2;j<=i;j++){
		if(j%2==0){
//			printf("Even num= %d\n",j);
			cube=j*j*j;
//			printf("cube Is =%d \n",cube);
			sum=sum+cube;
			
		}
		
	}
	printf("sum =%d",sum);
}
