#include<stdio.h>
 int main(){
 	int salary,age;
 	printf("Enter your salary:");
 	scanf("%d",&salary);
 	printf("Enter your Age:");
 	scanf("%d",&age);
 	if(age>=25 && salary>=45000)
	 {
 	   printf("Your Loan is Approved!\n");
	 } else {
	 	printf("Your Loan isn't Approved");
	 	
	 }
	 return 0;
 }
