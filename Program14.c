//Accept one numbers from user and display factors of that number


#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  Factors
//  Input :              Integer
//  Output :            void
//  Description :      It is used to display factors of number
//  Date :               5/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Factors(int iNo)
{

	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for (int i = 1; i < iNo; i++)
	{
		if((iNo % i)==0)
		{
		printf("%d\n",i);
		}
	}
}


int main()
{

	int iValue=0;
	unsigned long int iRet=0;
	printf("Enter the Number  :");
	scanf("%d",&iValue);
	Factors(iValue);
	return 0;
}
