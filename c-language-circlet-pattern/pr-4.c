//1 0 1 0 1
//  0 1 0 1
// 	  1 0 1
//      0 1
//        1
#include<stdio.h>


void main(){
int i,j,s;

	for(i=1;i<=5;i++){
		for(s=1;s<=i;s++){
 				printf(" ");
 		}
 		for(j=i;j<=5;j++){
			 printf("%d",j%2);
		 }
			printf("\n");
		}

}
