//Accept number from user and display 1 * 2 * output
#include<stdio.h>
typedef unsigned int UI;

void Pattern(UI iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=iNo;iCnt>0;iCnt--)
	{
		printf("*\t%d\t",iCnt);
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