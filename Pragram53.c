/*
Input=row=4,Columns=4
output=

# 
# #        
# # #
# # # #
*/
#include<stdio.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Input :                     Integer,Interger
//  Output :                  void
//  Description :        It is used to display # pattern.
//  Date :                       19/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
	char ch;
	if(iRow!=iCol)
	{
		return;
	}
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{

		for(j=1,ch='A';j<=iCol;j++,ch++)
		{
			if(i>=j)
			{
				printf("%c\t",ch);
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