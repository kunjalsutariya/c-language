#include<stdio.h>
main()
{
	int choice;
	printf("The Moon-life Cafe\n\n");
	printf("Enter your choice:-");
	scanf("%d",&choice);
	
	switch(choice)
	{
		printf("Menu:-");
		printf("PIZAA");
		printf("SENDWICH");
		printf("SIZLER");
		printf("PASTA");
		printf("BURGER");
		
		case 1:
			printf("Yeah..Your Order PIZZA..!\n\n");
		break;	
		case 2:
			printf("Yeah..Your Order SENDWICH..!\n\n");
		break;	
		case 3:
			printf("Yeah..Your Order SIZLER..!\n\n");
		break;	
		case 4:
			printf("Yeah..Your Order PASTA..!\n\n");
		break;	
		case 5:
			printf("Yeah..Your Order BURGER..!\n\n");
		break;
		
		default:
			printf("Sorry..this is not available\n\n");
		}
		
		printf(" \t***THANK YOU***");			
}
