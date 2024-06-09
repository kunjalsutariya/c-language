#include<stdio.h>
main(){
	int num;
	
	printf("Enter the value of num : \n");
	scanf("%d",&num);
	
	if(num<0){
		printf("the num you have enter is nagetive..");
	}
	else if(num==0){
		printf("the num you have enter is zero..");
	}
	else{
		printf("the num you have positive..");
	}
}