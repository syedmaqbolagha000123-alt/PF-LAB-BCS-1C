#include<stdio.h>
  int main(){
  	int age;
  	printf("Voting Eligiblity Proccess>>>>>>>>\n");
  	printf("Please Enter your Age:");
  	scanf("%d",&age);
  	
  	if(age>=18){
  		printf("WOOO!\n Your are Eligible for Casting your Vote!");
  		
	  }
	  else
	  {
	  	printf("Oops!\n You are not Egilible for Casting Your Vote!");
	  }
	  return 0;
  }
