#include<stdio.h>
main(){
	int a;
	printf("Enter no for check even||odd \n");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		printf("Your value even num...");
	}
	else{
		printf("Your value odd num...");
	}
}