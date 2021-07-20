//accept number4 from user and reverse that number

#include<stdio.h>
int Reverse(int iNo)
{
	int rev=0;
	int digit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(;iNo>0;iNo=iNo/10)
	{
		digit=iNo%10;
		rev=(rev*10)+digit;
	}
	
	return rev;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter the Number  \n:");
	scanf("%d",&iValue);
	iRet=Reverse(iValue);
	printf("Reverse number  is  %d",iRet);
	return 0;
}
