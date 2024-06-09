#include<stdio.h>
main(){
	int a;
	
	printf("Enter yor Age:-");
	scanf("%d",&a);
	
	if(a <=0){
		printf("Please enter your valid age \n");
	}
	else if(a >= 18){
		printf("you are a eligible for vote  \n");
	}
	else{
		printf("you are a not eligible for vote");
	}
}