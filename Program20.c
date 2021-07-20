//Accept number from user and display digits of that number seperately in reverse format
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  DisplayDigits
//  Input :              Integer
//  Output :            void
//  Description :      It is used to Display digits of number
//  Date :               7/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void DisplayDigits(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int digit=0;
	while(iNo != 0)
	{
		digit=iNo%10;
		iNo=iNo/10;
		printf("%d\n",digit);
	}
}
int main()
{

	int iValue=0;
	printf("Enter the Number  :");
	scanf("%d",&iValue);
	DisplayDigits(iValue);
	return 0;
}
