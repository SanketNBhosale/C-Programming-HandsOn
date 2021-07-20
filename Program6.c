
//Accept number from user and check whether it is even or odd

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  CheckEven
//  Input :              Integer
//  Output :            Boolean
//  Description :      It is used to find out the number is even or not.
//  Date :               26/02/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
bool CheckEven(int iNo1)
{
	if (iNo1 % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("enter the Number  :  ");
	scanf("%d",&iValue);
	bRet=CheckEven(iValue);
	if(bRet==true)
	{
		printf("%d is Even Number",iValue);
	}
	else
	{
		printf("%d is Odd Number",iValue);
	}
	return 0;
}