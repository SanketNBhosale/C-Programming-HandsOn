#include<stdio.h>
#include<stdlib.h>

int FirstOccurance(int Arr[],int iSize,int iNo)
{
	int i=0;
	int iCnt=0;
	int occur=-1;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		{
			break;
		}
	}
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return i;
	}
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
	iRet=FirstOccurance(arr,iLength,No);
	if(iRet==-1)
	{
		printf("Number is Not Found");
	}
	else
	{
		printf("index of first occurance of number is : %d",iRet);
	}
		free(arr);
	return 0;
}