#include<stdio.h>
main(){
	const int totle=500;
	float total_marks,percentage;
	
	printf("Enter your marks:-");
	scanf("%f",&total_marks);
	percentage=total_marks*100/500;
	

		if(percentage>=90){
			printf("A grade\n");
		}
		else if(percentage>=80){
			printf("B grade\n");
		}
			else if(percentage>=70){
			printf("C grade\n");
		}
			else if(percentage>=60){
			printf("D grade\n");
		}
			else if(percentage>=50){
			printf("E grade\n");		
		}
		else{
			printf("YOU ARE FAILED...");
		}
		printf("percentage:-%.2f", percentage);	
}	