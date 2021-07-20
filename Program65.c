#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]!=iNo)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int i=0;
	int No=0;
	int *arr=NULL;
	int iLength=0;
	int iRet=0;

	printf("Enter Number of Elements : ");
	scanf("%d",&iLength);
	printf("Enter Number which want to search : ");
	scanf("%d",&No);

	arr=(int *)malloc(iLength * sizeof(int));

	printf("Enter Elements :");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet=Frequency(arr,iLength,No);
		printf("Count of numbers except  %d is: %d",No,iRet);
		free(arr);
	return 0;
}