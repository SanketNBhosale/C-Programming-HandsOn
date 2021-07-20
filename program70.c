#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
	int i=0;
	int iMin=Arr[0];
	if(Arr == NULL)
	{
		return -1;
	}
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
		
	}
	return iMin;
}
int main()
{
	int i=0;
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
	iRet=Minimum(arr,iLength);

	printf("Minimum number is %d",iRet);
	
		free(arr);
	return 0;
}