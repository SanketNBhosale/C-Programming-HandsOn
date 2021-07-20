#include<stdio.h>
typedef unsigned int UI;
int DisplayBinary(UI iNo)
{
	UI iDigit=0;
	int iCnt=0;
	while(iNo > 0)
	{
		iDigit=iNo%2;
		iNo=iNo/2;
		if(iDigit == 1)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	UI iNo=0;
	int iRet=0;
	printf("Enter Number : ");
	scanf("%d",&iNo);                                   
	iRet=DisplayBinary(iNo);
	printf("Number of On bits are  :%d\n",iRet);
	return 0;
}