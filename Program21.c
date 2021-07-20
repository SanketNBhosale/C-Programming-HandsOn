//Accept number from user and return addition of all the digits of that numbers
#include<stdio.h>

int AddDigits(int iNo)
{
	int sum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo != 0)
	{
		sum=sum+(iNo%10);
		iNo=iNo/10;
		
	}
	return sum;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=AddDigits(iValue);
	printf("Addition is %d",iRet);
	return 0;
}
