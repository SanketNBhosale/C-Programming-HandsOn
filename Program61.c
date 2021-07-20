#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  Sum
//  Input :                     Integer *,Interger
//  Output :                  Integer
//  Description :        It is used to get sum of array elements.
//  Date :                       22/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Sum(int Arr[],int iLength)
{
	int i=0;
	int Add=0;
	for(i=0;i<iLength;i++)
	{
		Add=Add+Arr[i];
	}
	return Add;
}
int main()
{
	int i=0;
	int iRet=0;
	int *arr=NULL;
	int iSize=0;
	printf("ENter No. of Elements \n");
	scanf("%d",&iSize);

	arr=(int*)malloc(iSize * sizeof(int));
	printf("ENter the Elements \n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet=Sum(arr,iSize);
	printf("Addition of elements is : %d",iRet);
	free(arr);
	return 0;
}