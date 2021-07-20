//accept number4 from user and check number is pallindrome or not 121==121

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  Maximum
//  Input :              Integer
//  Output :           boolean
//  Description :      It is used to find out the number is pallindrome or not.
//  Date :              09/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
bool checkPallindrom(int iNo)
{
	int rev=0;
	int digit=0;
	int iTemp=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iTemp=iNo;
	
	while(iNo > 0)
	{
		digit=iNo%10;
		rev=(rev*10)+digit;
		iNo=iNo/10;
	}
	if(rev==iTemp)	
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
	bool bRet;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	bRet=checkPallindrom(iValue);
	if(bRet==true)
	{
	printf("number is pallindrom");
	}
	else
	{
	printf("number is not pallindrom");
	}
	return 0;
}
