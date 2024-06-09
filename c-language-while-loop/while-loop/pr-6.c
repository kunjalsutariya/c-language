#include<stdio.h>
main()
{
	int i,j,sum=0,cube;
	printf("Enter any num:-");
	scanf("%d",&i);
	j=2;
	while(j<=i){
		if(j%2==0){
//			printf("Even num= %d\n",j);
			cube=j*j*j;
//			printf("cube Is =%d \n",cube);
			sum=sum+cube;
			
		}
		j++;	
	}
	printf("sum =%d",sum);
}
