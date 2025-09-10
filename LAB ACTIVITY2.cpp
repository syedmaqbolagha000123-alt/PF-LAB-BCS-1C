#include<stdio.h>
#include<string.h>
  int main()
  {
  	char password[30];
  	char Email[50];
  	
  	printf("Please Verify your Email and password to access your account!\nEnter your Email:");
  	scanf("%s",Email);
  	   // check email first
  	if(strcmp(Email,"admin@gmail.com")==0){
  		printf("Enter Your password:");
  	    scanf("%s",password);
  	     // check password
        if(strcmp(password,"admin123")==0)
	    {
      	printf("Successfully login ");
      	
	   }else{
	  	printf("Invalid password");
	   }
  		
	}else{
	 		printf("Invalid Email ");
	  }
  return 0;
  			
  }
