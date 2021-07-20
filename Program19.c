//Accept number from user and return addition of all the digits of that numbers
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  AddDigits
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to get addition of digits from number
//  Date :               7/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int AddDigits(int iNo)
{
	int sum=0;
	int digit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo != 0)
	{
		digit=iNo%10;
		iNo=iNo/10;
		sum=sum+digit;
	}
	return sum;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=AddDigits(iValue);
	printf("Addition is %d",iRet);
	return 0;
}
