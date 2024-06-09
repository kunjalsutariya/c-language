#include<stdio.h>
main(){
	int month;
	printf("Enter your month:-");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("JANUARY...!");
		break;
		case 2:
			printf("FEBRUARY...!");
		break;	
		case 3:
			printf("MARCH...!");
		break;	
		case 4:
			printf("APIRL...!");
		break;	
		case 5:
			printf("MAY...!");
		break;	
		case 6:
			printf("JUNE...!");
		break;	
		case 7:
			printf("JULY...!");
		break;	
		case 8:
			printf("AUGUST...!");
		break;	
		case 9:
			printf("September...!");
		break;	
		case 10:
			printf("October...!");
		break;	
		case 11:
			printf("November...!");
		break;	
		case 12:
			printf("December...!");
		break;	
		default:
		printf("please enter valid choice");	
	}
}