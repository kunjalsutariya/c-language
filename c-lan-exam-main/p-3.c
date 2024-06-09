#include <stdio.h>
main() {
	int size;
    int arr[size];
    int i;
    
	printf("Enetr the size of array:-");
	scanf("%d",&size);
	
    printf("Enter the all elemnet in array: ");
    for(i=0;i<size;i++){
    	printf("a[%d]",i);
    	scanf("%d",&arr[i]);
	}
   		for(i=0;i<size; i++){
   			if(arr[i]%2==0){
   				printf(" %d",arr[i]);
			   }
		   }
 }
  

