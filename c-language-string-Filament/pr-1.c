//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
//For example,
//Input:
//Enter any string: nayan
//
//Output:
//Given string is a Palindrome.

#include<stdio.h>

main(){
	int i, length,rev;
	char name[10];
	
	printf("Enter any string :");
	gets(name);
	
	for(length = 0; name[length] != '\0';length++);
	for(i=0;i<length/2;i++){
		if(name[i] !=name[length-i-1]){
			rev=1;
		}
	}
	
	
		 if(rev == 0){
		 	printf("\n%s Given string is a Palindrome.",name);
		 	
		 }
		 else{
		 	printf("\n%s Given string is not a Palindrome.",name);
		 
		 }
}
