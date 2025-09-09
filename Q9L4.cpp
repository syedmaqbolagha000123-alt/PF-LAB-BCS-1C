#include <stdio.h>
  int  main(){
  	printf("WELLCOME TO!!\nExam Appearance Conditions!\n");
  	int Attendance;
  	int Internal_Marks;
  	printf("Enter your Attendance in %% :");
  	scanf("%d",&Attendance);
  	printf("Enter your Exams Marks: ");
  	scanf("%d",&Internal_Marks);
  	
  	if(Attendance>=75 && Internal_Marks>=40){
  		printf("You can appear for final Exams\n");	
	  }else{
	  		printf("You can not appear for final Exams\n");	
	  }
  	return 0;
  	
  	
  }
