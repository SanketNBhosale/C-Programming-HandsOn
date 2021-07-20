#include<stdio.h>
typedef unsigned int UI;
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer,Character
//  Output :                  void
//  Description :        It is used to Display character pattern.
//  Date :                       13/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(UI iNo,char Ch)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",Ch);
	}
	printf("\n");
}
int main()
{
	UI iValue=0;
	char cValue='\0';
	printf("Enter Number");
	scanf("%d",&iValue);
	printf("Enter Character");
	scanf(" %c",&cValue);
	Pattern(iValue,cValue);
	return 0;
}