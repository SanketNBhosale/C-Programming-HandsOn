//Accept two numbers from user as X and Y and get output as X^Y


#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  GetPower
//  Input :              Integer, Integer
//  Output :            Integer
//  Description :      It is used to find out the power of first number res to second number
//  Date :               02/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
unsigned long int GetPower(int iNo1,int iNo2)
{
	int iMult=1;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	for(int iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}


int main()
{

	int iValue1=0;
	int iValue2=0;
	unsigned long int iRet=0;
	printf("Enter the First Number  :");
	scanf("%d",&iValue1);
	printf("Enter the Second Number  :");
	scanf("%d",&iValue2);
	iRet=GetPower(iValue1,iValue2);
	printf("  power is %d",iRet);
	return 0;
}