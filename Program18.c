
//accept number from user and check whether that number is prime or not

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  CheckPrime
//  Input :              Integer
//  Output :            Boolean
//  Description :      It is used to find out the number is prime or not
//  Date :               23/02/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
bool checkPrime(int iNo)
{
	int iCnt=0;
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	
	for (iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			break;
		}
	}
	if((iCnt)==(iNo/2+1))
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
	bool bRet=0;
	printf("Enter the Number  :");
	scanf("%d",&iValue);
	bRet=checkPrime(iValue);
	if(bRet==true){
	printf("%d is prime number\n",iValue);
	}
	else
	{
		printf("%d is not Prime number\n",iValue);
	}
	return 0;
}
