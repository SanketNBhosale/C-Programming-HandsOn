//accept number4 from user and return the largest digit

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  MaxDigit
//  Input :              Integer
//  Output :            Integer
//  Description :      It is used to find out the largest digit from number
//  Date :               8/03/2021
//  Author :            Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int maxDigit(int iNo)
{
	int temp=0;
	int digit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo > 0)
	{
		digit=iNo%10;
		if(digit>temp)
		{
			temp=digit;
			if(temp==9)
			{
				break;
			}
		}
		iNo=iNo/10;
	}
	return temp;
}
int main()
{
	int iRet;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=maxDigit(iValue);
	printf("Maximum number is %d",iRet);

	return 0;
}
