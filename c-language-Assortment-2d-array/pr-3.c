#include<stdio.h>
main(){
	int row,col,i,j;
	printf("Enter the array's row size:-");
	scanf("%d",&row);
	printf("Enter the array's row size:-");
	scanf("%d",&col);
	
	printf("Enter array's elements:\n");
	int arr[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The transpose matrix of an array: \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}