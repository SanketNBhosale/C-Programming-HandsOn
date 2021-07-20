#include<stdio.h>
typedef unsigned int UI;
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer,Integer
//  Output :                  void
//  Description :        It is used to display * Pattern
//  Date :                       14/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(UI iRow,UI iCol)
{
	int i=0;
	int j=0;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	printf("\n");

}
int main()
{
	UI iValue1=0;
	UI iValue2=0;
	printf("Enter number of rows");
	scanf("%d",&iValue1);
	printf("Enter number of columns");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}