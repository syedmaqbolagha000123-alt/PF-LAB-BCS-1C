#include<stdio.h>
#include<string.h>
  int main()
  {
  	int userAge;
  	char UserNationality[50];
  	
  	printf("Please Verify your Age And Nationality for casting Vote!\nEnter your Age:");
  	scanf("%d",&userAge);
  	   // check age first
  	if(userAge>18){
  		printf("Enter Your Nationality:");
  	    scanf("%s",UserNationality);
  	     // check nationality
        if(strcmp(UserNationality,"pakistani")==0)
	    {
      	printf("You are Eligible for Vote");
      	
	   }else{
	  	printf("You are not Eligible for Vote");
	   }
  		
	}else{
	 		printf("You are not Eligible for Vote");
	  }
  return 0;
  			
  }
