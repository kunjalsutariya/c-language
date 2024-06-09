//1
//2    3
//4    5   6
//7    8   9   10
//11   12   13  14  15

#include<stdio.h>
void main()
{
	int i,j,c=2;
	char r='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			
			if(i%2==0){
					if(j%2==0){
						printf(" %c",r++);
				   }else{
				   	printf(" %d",c++);
				   }
			}else if(j%2==0){
						printf(" %d",c++);
			
		         }else{
				    printf(" %c",r++);
			}
		
		}
		printf("\n");
	}
}
