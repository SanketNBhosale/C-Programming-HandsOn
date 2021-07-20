#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
	int i=0;
	if(Arr == NULL)
	{
		return -1;
	}
	int iMax=Arr[0];
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
		
	}
	return iMax;
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
	iRet=Maximum(arr,iLength);

	printf("Maximum number is %d",iRet);
	
		free(arr);
	return 0;
}