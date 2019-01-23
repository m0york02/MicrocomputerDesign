#include<stdio.h>

/*global Variables */
signed int num1;
signed int num2;
signed int addition(signed int num1,signed int num2);
signed int subtraction(signed int num1,signed int num2);
signed int multiplication(signed int num1,signed int num2);

int main() {
	
	while(1){
	
	/*Options to pick from*/
	 printf("Please choose your option:"
	 "\n1 = addition"
	 "\n2 = subtraction"
	 "\n3 = multiplication"
	 "\n4 = division"
	 "\n5 = leave program"
	 "\n\nChoice: ");
	 
	 /*Choice you made*/
	 scanf("%d", &choice);
	 
	 /*switch case*/
	 switch (choice)
	 {
	 case 1:
		printf("Enter two numbers: \n");
      	scanf("%ld %ld", &num1, &num2);      	
      	printf("Sum = %ld", addition(num1,num2));
      	break;	
      	
     case 2:
	 	printf("Enter two numbers: \n");
      	scanf("%ld %ld", &num1, &num2);     	
      	printf("Difference = %ld", subtraction(num1,num2));
      	break;	
      	
     case 3:
	  	printf("Enter two numbers: \n");
      	scanf("%ld %ld", &num1, &num2);      	
     	printf("Product = %ld", multiplication(num1,num2));
      	break; 	
      
     case 4:
	 	printf("Enter Dividend: ");
      	scanf("%d", &num1);
      	printf("Enter Divisor: ");
      	scanf("%d", &num2); 
      	
      	break;
      
      case 5:
      	printf("Leave program");
      	return(0);
    
      
	 }
	}
	return(0);
}
