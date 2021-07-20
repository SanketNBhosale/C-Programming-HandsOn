
#include<stdio.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer,Interger
//  Output :                  void
//  Description :        It is used to display  * pattern.
//  Date :                       20/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
	if(iRow!=iCol)
	{
		return;
	}
	int i=0,j=0;
	for(i=iRow;i>=1;i--)
	{

		for(j=1;j<=i;j++)
		{
			if(i>=j)
			{
				printf("*\t");
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