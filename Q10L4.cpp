#include<stdio.h>
  int main(){
  	int balance,withdrawal;
  	printf("Enter your current balance: ");
  	scanf("%d",&balance);
  	printf("Enter amount of withdraw: ");
  	scanf("%d",&withdrawal);
  	if(withdrawal>balance){
  		printf("Withdrawal Rejected\n");
  		printf("Reason: insufficient balance.\n");
	  }else if(withdrawal % 500 != 0){
	  	printf("Withdrawal Rejected\n");
	  	printf("Reason: Amount must be Multiple of 500.\n");
	  }
	  else{
	  	balance -= withdrawal;
	  	printf("Withdrawal Succesful\n");
	  	printf("Remaining Balance :%d\n",balance);
	  	
	  }
	  return 0;
  }
