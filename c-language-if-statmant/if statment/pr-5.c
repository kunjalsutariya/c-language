#include<stdio.h>
main(){
	int age;
	
	printf("Enter the age :\n");
	scanf("%d",&age);
	
	if(age>=1){
		printf("the age is you have entered is yonger");
	}
	else if(age>=13){
		printf("the age is you have entered is teenager ");
	}
	else if(age>=20){
		printf("the age is you have entered is adult ");
	}
	else if(age>=65){
		printf("the age is you have entered is senior ");
	}
	else{
		printf("In valid");
	}
}