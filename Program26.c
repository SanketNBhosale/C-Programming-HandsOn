//accept number4 from user and reverse that number

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  Reverse
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to reverse the Number
//  Date :               08/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Reverse(int iNo)
{
	int rev=0;
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
			rev=(rev*10)+digit;
		}

		iNo=iNo/10;
	}

	
	return rev;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=Reverse(iValue);
	printf("Reverse number  is  %d",iRet);
	return 0;
}
