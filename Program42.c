#include<stdio.h>
typedef unsigned int UI;
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer
//  Output :                  void
//  Description :        It is used to display alphabets till given number
//  Date :                       14/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(UI iNo)
{
	int iCnt=0;
	char nextCh='\0';
	printf("\n");
	if(iNo > 26)
	{
		return;
	}
	for(iCnt=0,nextCh='A';iCnt<iNo;iCnt++,nextCh++)
	{
		printf("%c\t",nextCh);

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