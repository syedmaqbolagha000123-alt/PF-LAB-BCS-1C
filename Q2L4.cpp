#include<stdio.h>
  int main(){
  	int age;
  	int ticket_price;
  	printf("Enter your age:");
  	scanf("%d",&age);
  	// check age conditions
  	if(age<12){
  		
  		ticket_price = 200;
	  }
	  else if(age>=12 && age <18){
	  	
	  	ticket_price = 300;
	  }
  	   else if(age >=18 && age<= 60){
  	   	
  	   	ticket_price = 500;
		 }
		 else{
		 	ticket_price = 250;
		 }
		 printf("Ticket Price =%d\n",ticket_price);
		  return 0;
  }       
