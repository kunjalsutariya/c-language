#include<stdio.h>
main(){
	float hra,da,ta;
	int gross_salary,basic_salary;
	
	printf("Enter basic salary:-");
	scanf("%d",&basic_salary);
	printf("Enter hra:-");
	scanf("%f",&hra);
	printf("Enter da:-");
	scanf("%f",&da);
	printf("Enter ta:-");
	scanf("%f",&ta);
	
	gross_salary=basic_salary+(basic_salary*hra/100)+(basic_salary*da/100)+(basic_salary*ta/100);
	printf("gross_salary:-%d\n",gross_salary);
}
