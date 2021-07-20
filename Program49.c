/*
Input=row=4,Columns=4
output=

1$$$
*2$$
**3$
***4       


*/
#include<stdio.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer,Interger
//  Output :                  void
//  Description :        It is used to display number , $ and * pattern.
//  Date :                       17/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i == j)
			{
				printf("%d\t",i);
			}
			else if(i>j)
			{
				printf("*\t");
			}
			else
			{
				printf("$\t");
			}
			
		}
		printf("\n");
	}

}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter Number of Rows :");
	scanf("%d",&iValue1);
	printf("Enter Number of Columns :");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}