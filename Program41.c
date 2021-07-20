#include<stdio.h>
typedef unsigned int UI;
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer
//  Output :                  void
//  Description :        It is used to Display character pattern
//  Date :                       14/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(UI iNo)
{
	int iCnt=0;
	char nextCh='A';
	printf("\n");
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("%c\t",nextCh+iCnt);
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