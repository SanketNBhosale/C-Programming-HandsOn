//accept number4 from user and return the frequency of digits between numbers between 3 to 7
#include<stdio.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  Frequency
//  Input :                     Integer
//  Output :                  Integer
//  Description :        It is used to find out the frequency of digits between numbers between 3 to 7
//  Date :                       10/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Frequency(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo % 10;
		if((iDigit >= 3) && (iDigit <= 7))
		{
			iCnt++;
		}
		iNo=iNo / 10;
	} 
	return iCnt;
}

int main()
{
	int iRet;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=Frequency(iValue);
	printf("Frequency is %d",iRet);

	return 0;
}
