//Accept two numbers from user and check whether second number is completely divisible to first number or not
//Input : 10,5
//output :second number is completely divisible to first number
//input :15,7
//Output :second number is not completely divisible to firts number

#include<stdio.h>
#include<stdbool.h>



///////////////////////////////////////////////////////////////////////////////////////////////
//Function name:CheckDivisible						
//input:integer	,integer									
//output:boolean
//Description:It checks whether second number is completely divisible to first number or not									
//date:01/03/2021									
//Author:Sanket Narayan Bhosale						
///////////////////////////////////////////////////////////////////////////////////////////////
bool CheckDivisible(int iNo1,int iNo2)
{
	if ((iNo1 % iNo2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int main()
{
	int iValue1=0;
	int iValue2=0;
	bool bRet=false;
	printf("enter the First Number  :  ");
	scanf("%d",&iValue1);
	printf("enter the First Number  :  ");
	scanf("%d",&iValue2);
	bRet=CheckDivisible(iValue1,iValue2);
	if(bRet==true)
	{
		printf("%d is completely divisible to %d\n",iValue2,iValue1);
	}
	else
	{
		printf("%d is not completely divisible to %d\n",iValue2,iValue1);
	}
	return 0;
} 