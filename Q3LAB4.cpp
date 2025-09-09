#include<stdio.h>
  int main(){
  	int Number1, Number2 ,Number3;
  	printf("Enter Number One : ");
  	scanf("%d",&Number1);
  	printf("Enter Number Two :");
  	scanf("%d",&Number2);
  	printf("Enter Number Three :");
  	scanf("%d",&Number3);
  	
  	if(Number1>Number2){
  		if(Number1>Number3){
  			printf("Largest Number =%d\n",Number1);
		  }else{
		  	printf("Largest Number =%d\n",Number3);
		  }
	  }else{
	  	if(Number2>Number3){
	  		printf("Largest Number =%d\n",Number2);
	  		
		  }
		  else{
		  	printf("Largest Number =%d\n",Number3);
		  }
	  }
	 return 0; 
  }
