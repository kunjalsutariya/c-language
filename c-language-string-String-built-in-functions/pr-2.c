#include<stdio.h>
main(){
	
	char psw[10],email[10];
	

		
	int i,upr=0,lwr=0,num=0,spc=0;

		if(psw[i]>= 65 && psw[i]<=90)
		{
			upr++;
		}
		if(psw[i]>=97 && psw[i]<=122){
			lwr++;
		}
	    if(psw[i]>=48 && psw[i]<=57){
			num++;
		}
		 if(psw[i]== '@' || psw[i]=='#'){
			spc++;
		}
	printf("Enter your email:");
	gets(email);
	printf("Enter your password:");
	gets(psw);
	
	
	if(strcmp(email,"admin@gmail.com")==0 && strcmp(psw, "123456")==0){
		printf("login  Successful...");
	}
	else{
		printf("Login Failed. Invalid Credentials.");
	}
}
