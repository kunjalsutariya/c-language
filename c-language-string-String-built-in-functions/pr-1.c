#include<stdio.h>

main(){
	char psw[10];
	
	printf("Enter your password: ");
	scanf("%s",&psw);
	
	int i,upr=0,lwr=0,num=0,spc=0;
	for(i=0; psw[i]!='\0'; i++)
	{
		if(psw[i]>= 65 && psw[i]<=90)
		{
			upr++;
		}
		else if(psw[i]>=97 && psw[i]<=122){
			lwr++;
		}
		else if(psw[i]>=48 && psw[i]<=57){
			num++;
		}
		else if(psw[i]== '@' || psw[i]=='#'){
			spc++;
		}
	}
	if(upr>0 && lwr > 0 && num>0 && spc>0){
		printf("your password is Strong");
	}
	else{
		printf("your password is not strong");
	}
}
