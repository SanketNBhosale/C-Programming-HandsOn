//Accept Marks from user and give him an grade
//Input : <35
//output :Fail
//input :>35<50
//Output : Third class
//input :>50<60
//Output : Second class
//input :>60<70
//Output : First class
//input :>70<100
//Output : First class with distinction
#include<stdio.h>
#include<stdbool.h>



/////////////////////////////////////////////////////////////////
//Function name:CheckResult						
//input:integer										
//output:void
//Description:It returns grade approprite to marks									
//date:01/03/2021									
//Author:Sanket Narayan Bhosale						
//////////////////////////////////////////////////////////////////
int CheckResult(int iMarks)
{
	if((iMarks<0)||(iMarks>100))
	{
		printf("Invalid Marks");
		return;
	}
	if ((iMarks>0)&&(iMarks < 35))
	{
		printf("Result is Fail");
	}
	else if((iMarks >=35) && (iMarks<50))
	{
		printf("Result is Pass Class");
	}
	else if((iMarks >=50) && (iMarks<60))
	{
		printf("Result is Second class");
	}
	else if((iMarks >=60) && (iMarks<70))
	{
		printf("Result is First Class");
	}
	else
	{
		printf("Result is Destinction");
	}
	return 0;
}
int main()
{
	int iValue=0;
	printf("enter the Number  :  ");
	scanf("%d",&iValue);
	if(CheckResult(iValue)==0)
	{
		CheckResult(iValue);
	}	
	
	return 0;
}