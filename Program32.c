//accept number4 from user and return the smallest digit
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  Difference
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out Difference between even and odd digits from number
//  Date :               10/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Difference(int iNo)
{
	int iSum1=0;
	int iSum2=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(int iCnt=1;iCnt<=iNo;iCnt++)                              
	{
		if(iNo % iCnt==0)
		{
			iSum1=iSum1+iCnt;
		}
		else
		{
			iSum2=iSum2+iCnt;
		}

	}
	return iSum1-iSum2;
	
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
