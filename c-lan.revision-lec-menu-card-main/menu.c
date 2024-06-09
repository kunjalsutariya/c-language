#include<stdio.h>
main(){
	int n1;
	char n2;
	 
	printf("\t\t\t\t\t\t<....WALCOM TO MY RESTAURANTS....> \n\n");
	  
	printf("Press 1 for SOUP..\n");	
	printf("Press 2 for STARTERS..\n");
	printf("Press 3 for PIZZA..\n");	
	printf("Press 4 for DISSERT..\n");
	
	printf("\n\n");
	printf("Enter any number:-");
	scanf("%d",&n1);
	printf("\n");
	switch(n1)
	{
		case 1:
			printf("your oder a soup..! \n\n");
			
			printf("Enter-A for Spicy Veg Manchow Soup _______130/- \n");
			printf("Enter-B tometo soup_______150/-\n");
			printf("Enter-C sweet corn vegetable Soup_______150/- \n");
			printf("Enter-D green pepper Soup_______150/- \n");
			printf("Enter-E broccoli cheddar soup_______150/- \n");
			
			fflush(stdin);
			printf("\n");
			printf("Enter any choice:");
			scanf("%c",&n2);
			printf("\n");
			switch(n2){
				case 'A':
				case 'a':	
					printf("your oder is spicy Veg manchow soup..!");
				break;
				case 'B':
				case 'b':	
					printf("your oder is tometo soup..!");
				break;
				case 'C':
				case 'c':	
					printf("your oder is sweet corn vegetable Soup..!");
				break;
				case 'D':
				case 'd':	
					printf("your oder is green pepper Soup..!");
				break;
				case 'E':
				case 'e':	
					printf("your oder is broccoli cheddar soup..!");
				break;	
				
			}
		break;
		
		case 2:
			printf("your oder a starter..! \n\n");
			
			printf("Enter-A paneer Tikka(8 PC) _______160/- \n");
			printf("Eneter-B Raja Kabab(fried)(8 pc)_______140/-\n");
			printf("Enetr-C Veg. machurian_______120/- \n");
			printf("Enetr-D Nachos & salasa_______150/- \n");
			printf("Enetr-E Tacos_______130/- \n");
			printf("Enetr-F Chees chilli Toast_______115/- \n");
			
						
			fflush(stdin);
			printf("\n");
			printf("Enter any choice:");
			scanf("%c",&n2);
			printf("\n");
			switch(n2){
				case 'A':
				case 'a':	
					printf("your oder is paneer Tikka(8 PC)..!");
				break; 
				
				case 'B':
				case 'b':	
					printf("your oder is Raja Kabab(fried)(8 pc)..!");
				break;
				
				case 'C':
				case 'c':	
					printf("your oder is Veg. machurian..!");
				break;
				
			 	case 'D':
				case 'd':	
					printf("your oder is Nachos & salasa..!");
				break;
				
				case 'E':
				case 'e':	
					printf("your oder is Tacos..!");
				break;	
				
				case 'F':
				case 'f':	
					printf("your oder is Chees chilli Toast..!");
				break;	
				
			}
		break;
		
		
		case 3:
			printf("your oder a Pizza..! \n\n");
			
			printf("Enter-A Cheese _______100/- \n");
			printf("Eneter-B Veg_______140/-\n");
			printf("Enetr-C Italian_______140/- \n");
			printf("Enetr-D Supereme_______150/- \n");
			printf("Enetr-E Panner______160/- \n");
			
						
			fflush(stdin);
			printf("\n");
			printf("Enter any choice:");
			scanf("%c",&n2);
			printf("\n");
				
			switch(n2){
				case 'A':
				case 'a':	
					printf("your oder is Cheese pizza..!");
				break; 
				
				case 'B':
				case 'b':	
					printf("your oder is Veg pizza..!");
				break;
				
				case 'C':
				case 'c':	
					printf("your oder is italian pizza..!");
				break;
				
			 	case 'D':
				case 'd':	
					printf("your oder is Supereme pizza..!");
				break;
				
				case 'E':
				case 'e':	
					printf("your oder is Paneerb pizza..!");
				break;
			}
		break;
		
		
		case 4:
			printf("your oder a Desserts..! \n\n");
			
			printf("Enter-A vanilla ice-cream _______90/- \n");
			printf("Eneter-B Chocolate ice-cream_______100/-\n");
			printf("Enetr-C Kulfi_______100/- \n");
			printf("Enetr-D Kesar-pista ice-cream_______100/- \n");
			printf("Enetr-E Cassatta_______100/- \n");
			
						
			fflush(stdin);
			printf("\n");
			printf("Enter any choice:");
			scanf("%c",&n2);
			printf("\n");	
			
			switch(n2){
				case 'A':
				case 'a':	
					printf("your oder is Vanilla ice-cream..!");
				break; 
				
				case 'B':
				case 'b':	
					printf("your oder isChocolate ice-creeam..!");
				break;
				
				case 'C':
				case 'c':	
					printf("your oder is Kelfi..!");
				break;
				
			 	case 'D':
				case 'd':	
					printf("your oder is Kesar-pista ice-cream..!");
				break;
				
				case 'E':
				case 'e':	
					printf("your oder is Cassatta..!");
				break;
			}
		break;
		default:
		printf("Sorry..your oder is not available ..");		
	}
}
