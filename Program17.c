//accept number from user and check whether is perfect number or not



#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  CheckPerfect
//  Input :              Integer
//  Output :            boolean
//  Description :      It is used to find out the number is perfect or not
//  Date :               6/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
bool checkPerfect(int iNo)
{

	if(iNo<0)
	{
		iNo=-iNo;
	}
	int Add=0;
	
	for (int i = 1; i <= iNo/2; i++)
	{
		if((iNo % i)==0)
		{
		Add=Add+i;
		}
		
	}
	if(Add==iNo)
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
	bRet=checkPerfect(iValue);
	if(bRet==true){
	printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d is not perfect number\n",iValue);
	}
	return 0;
}
