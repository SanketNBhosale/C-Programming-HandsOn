#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  DigitFrequency
//  Input :              Integer, Integer
//  Output :            Integer
//  Description :      It is used to find out frequency of digit in number
//  Date :               8/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int DigitFrequency(int iNo,int iNo2)
{
	int sum=0;
	int digit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo2>10 || iNo2 <= 0)
	{
		printf("number must between 1 to 9");
		return 0;
	}
	
	while(iNo != 0)
	{
		digit=iNo%10;
		iNo=iNo/10;
		if(digit==iNo2)
	{
		sum++;
	}
		
	}
	
	return sum;
}
int main()
{
	int iRet=0;
	int iValue1=0;
	int iValue2=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue1);
	printf("Enter the value which want to search  \n:");
	scanf("%d",&iValue2);
	iRet=DigitFrequency(iValue1,iValue2);
	printf("%d   value is repeted   %d  times",iValue2,iRet);
	return 0;
}
