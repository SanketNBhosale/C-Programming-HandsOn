//Accept number from user and display table of that number
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  DisplayTable
//  Input :              Integer
//  Output :           void
//  Description :      It is used to Display table of given number
//  Date :               1/02/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void DisplayTable(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(int i=1;i<=10;i++)
	{
		printf("%d\n",iNo*i);
	}
	
}
int main()
{
	int iValue=0;
	printf("enter the Number  :  ");
	scanf("%d",&iValue);
	DisplayTable(iValue);
	
	return 0;
}