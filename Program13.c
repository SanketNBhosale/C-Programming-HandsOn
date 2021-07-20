//Accept one numbers from user and get factorial of that number


#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  Factorial
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out factorial of number
//  Date :               5/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Factorial(int iNo1)
{
	int iMult=1;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	
	while(iNo1>0)

	{
		iMult=iMult*iNo1;
		iNo1--;
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
