#include<stdio.h>
main(){
	int a,b,c;
	 printf("Enter num of A:-");
	 scanf("%d",&a);
	  printf("Enter num of B:-");
	 scanf("%d",&b);
	  printf("Enter num of C:-");
	 scanf("%d",&c);
	 
	(a<b)?
		(a<c)?printf("A is min value...!")
			   :printf("C is min value...!")		
	
	:(b<c)?printf("B is min value...!")
		  :printf("C is min value...!");
}
