//accept number4 from user and return the smallest digit
#include<stdio.h>
typedef unsigned long int ULONG;

/////////////////////////////////////////////////////////////
//
//  Function name:  MinDigit
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out the Smallest digit from number
//  Date :               09/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int MinDigit(ULONG iNo)
{
	int iDigit=0;
	int iTemp=9;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo > 0)
	{
		iDigit=iNo%10;
		if(iDigit<iTemp)
		{
			iTemp=iDigit;
			if(iTemp == 0)
			{
				break;
			}
		}
		
		iNo=iNo/10;
	}
	return iTemp;
}

int main()
{
	int iRet;
	ULONG iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=MinDigit(iValue);
	printf("Minimum number is %d",iRet);

	return 0;
}
