#include<stdio.h>
main(){
	const int totle=500;
	float total_marks,percentage;
	
	printf("Enter your marks:-");
	scanf("%f",&total_marks);
	percentage=total_marks*100/500;
	

		if(percentage>=90){
			printf("A grade");
		}
		else if(percentage>=80){
			printf("B grade");
		}
			else if(percentage>=70){
			printf("C grade");
		}
			else if(percentage>=60){
			printf("D grade");
		}
		else{
			printf("failed");
		}
		printf("percentage:-%.2f",percentage);	
}	