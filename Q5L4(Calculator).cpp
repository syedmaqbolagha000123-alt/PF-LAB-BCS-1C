#include<stdio.h>
  int main()
  {
  	float Number1,Number2,result;
  	int choice;
  	printf("Enter first Number:");
  	scanf("%f",&Number1);
  	
  	printf("Enter second Number:");
  	scanf("%f",&Number2);
  	
  	
  	printf("\n Choose an Operation:\n");
  	printf("1. Addition\n");
  	printf("2. Subtraction\n");
  	printf("3. Multiplication\n");
  	printf("4. Division\n ");
  	scanf("%d",&choice);
  	
  	if(choice==1){
  		result = Number1 + Number2;
  		printf("Result = %.2f\n",result);
  		
	  }else if(choice==2){
	  	result = Number1 - Number2;
	  	printf("Result = %.2f\n",result);
	  	
	  }else if(choice==3){
	  	result = Number1 * Number2;
	  	printf("Result = %.2f\n",result);
	  }else if(choice==4){
	  	if(Number2 !=0){
	  			result = Number1 / Number2;
	  			printf("Result = %.2f\n",result);
		  }else{
		  	printf("Error:Division by zero!\n");
		  }	
	  }
	  else{
	  	printf("Invalid choice!\n");
	  }
	 return 0; 
	  
  }
