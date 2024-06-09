#include<stdio.h>
main(){
	int week;
	printf("Enter your week:-");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
			printf("1st week");
		break;
		case 2:
			printf("2ed week");
		break;
		case 3:
			printf("3rd week");
		break;
		case 4:
			printf("4th week");
		break;
		default:
			printf("please enter valid week");	
	}
	
}