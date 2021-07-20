//Accept one numbers from user and get factorial of that number


#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  Factorial
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out factorial of number
//  Date :               04/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Factorial(int iNo1)
{
	if(iNo1=0)
	{
		return 1;
	}
	int iMult=1;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	
	for(int iCnt=1;iCnt<=iNo1;iCnt++)
	{
		iMult=iMult*iCnt;
	}
	return iMult;
}


int main()
{

	int iValue1=0;
	unsigned long int iRet=0;
	printf("Enter the Number  :");
	scanf("%d",&iValue1);
	iRet=Factorial(iValue1);
	printf("  Factorial  is %d",iRet);
	return 0;
}
