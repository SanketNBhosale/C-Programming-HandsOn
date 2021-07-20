#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
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
	

	arr=(int *)malloc(iLength * sizeof(int));

	printf("Enter Elements :");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Number which want to find : ");
	scanf("%d",&No);
	iRet=Frequency(arr,iLength,No);
		printf("Frequency of number is: %d",iRet);
		free(arr);
	return 0;
}