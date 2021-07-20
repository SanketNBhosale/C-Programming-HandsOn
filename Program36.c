
//accept number from user and print display number of stars as output

#include<stdio.h>
typedef unsigned int UI;
/////////////////////////////////////////////////////////////
//
//  Function name:  pattern
//  Input :                     Integer
//  Output :                  void
//  Description :        It is used to display * pattern
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
		printf("*\t");
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