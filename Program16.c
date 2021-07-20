//Accept one numbers from user and Return addition  of its factors


#include<stdio.h>

int Factors(int iNo)
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
	return Add;
}


int main()
{

	int iValue=0;
	int iRet=0;
	printf("Enter the Number  :");
	scanf("%d",&iValue);
	iRet=Factors(iValue);
	printf("%d\n",iRet);
	
	return 0;
}
