//accept number4 from user and return the difference between smallest and biggest digit
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  Difference
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out the difference between smallest and biggest digit
//  Date :               10/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Difference(int iNo)
{
	int iDigit=0;
	int iMax=0;
	int iMin=9;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo % 10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo / 10;
	} 
	return iMax-iMin;
}

int main()
{
	int iRet;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=Difference(iValue);
	printf("Difference is %d",iRet);

	return 0;
}
