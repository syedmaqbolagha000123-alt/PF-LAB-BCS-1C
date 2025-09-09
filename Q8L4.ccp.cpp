#include<stdio.h>

  int main()
  {
  	int  Temperature;
  	printf("Enter Today Temperature:\n simple Enter numeric value\nT:");
  	scanf("%d",&Temperature );
  	if(Temperature > 30){
  		printf("HOT DAY\n");
	  }else{
	  	printf("Pleasant Day!\n");
	  }
	  return 0;
  	
  }
