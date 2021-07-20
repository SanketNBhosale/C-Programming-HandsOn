#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  getEven
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out addition of even digits of number
//  Date :              8/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int getEven(int iNo)
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
		if(digit%2==0)
	{
		sum++;
	}
		
	}
	
	return sum;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=getEven(iValue);
	printf("even digits are is %d",iRet);
	return 0;
}
