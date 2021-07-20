
//accept number from user and multiply the digits of that number
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  MultDigit
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out multiplication of digits of number
//  Date :              8/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int MultDigit(int iNo)
{
	int mult=1;
	int digit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo > 0)
	{
		digit=iNo%10;
		if(digit != 0)
		{
			mult=mult*digit;
		}

		iNo=iNo/10;
	}

	
	return mult;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=MultDigit(iValue);
	printf("multiplication is  %d",iRet);
	return 0;
}
