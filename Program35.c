#include<stdio.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  NumberLine
//  Input :                     Integer
//  Output :                  void
//  Description :        It is used to display number from negative to positive
//  Date :                       11/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void NumberLine(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);

	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	NumberLine(iValue);

	return 0;
}
