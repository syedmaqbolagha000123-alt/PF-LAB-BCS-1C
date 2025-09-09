#include<stdio.h>
#include<string.h>
  int main()
  {
  	char userPassword[20];
  	printf("Enter your Password to Access your account.\n password should be 4 characters:");
  	scanf("%s", userPassword);
  	if(strcmp(userPassword,"1234") == 0){
  		printf("Access Granted!\n");
	  }else{
	  	printf("Access Denied!\n");
	  }
	  return 0;
  	
  }
