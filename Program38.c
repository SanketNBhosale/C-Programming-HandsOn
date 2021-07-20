//Accept number from user and display 1 * 2 * output
#include<stdio.h>
typedef unsigned int UI;
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer
//  Output :                  void
//  Description :        It is used to Display 1 * 2 * pattern.
//  Date :                       12/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(UI iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t*\t",iCnt);
	}
	printf("\n");
}
int main()
{
	UI iValue=0;
	printf("Enter Number");
	scanf("%d",&iValue);

	Pattern(iValue);
	return 0;
}