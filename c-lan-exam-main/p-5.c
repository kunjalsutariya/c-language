#include<stdio.h>
#include<string.h>
struct company{
	char company_name[100];
	int processer;
	int price;	
};
 void main(){
 	int n;
 	printf("num of leptop:-");
 	scnaf("%d,&n");
 	
 	struct company n1[n];
 	
 	int i;
 	
 	for(i=0;i<n ;i++){
 		fflush(stdin);
 		printf("company-name");
 		gets(n1[i].company_name);
 		
 		printf("processer: ");
 		scanf("%d",&n1[i].processer);
 		
 		printf("price: ");
 		scanf("%d",&n1[i].price);
	 }
	 printf("\n");
	 printf("comapany-name\t processer \t price");
	 
	 for(i=0;i<n;i++){
	 	printf("\n%s\t%d\t%d\n",n1[i].company_name,n1[i].processer,n1[i].price);
	 }
 }
