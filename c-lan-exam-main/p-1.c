#include<stdio.h>
main(){
	const int total=500;
	float total_marks,percentage;
	int guj,hindi,eng,sci,maths;
	
	printf("Enetr the marks of guj:-");
	scanf("%d",&guj); 
	printf("Enetr the marks of hindi:-");
	scanf("%d",&hindi); 
	printf("Enetr the marks of eng:-");
	scanf("%d",&eng); 
	printf("Enetr the marks of sci:-");
	scanf("%d",&sci); 
	printf("Enetr the marks of maths:-");
	scanf("%d",&maths); 
	
	
	percentage=total_marks*100/500;
	
	printf("percentage:-%.2f", percentage);	
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
			else if(percentage>=40){
			printf("F grade\n");		
		}
		else{
			printf("...FAILED...");
		}
		
}	
