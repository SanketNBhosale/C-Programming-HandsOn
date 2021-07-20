#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  EvenCnt
//  Input :                     Integer *,Interger
//  Output :                  Integer
//  Description :        It is used to get count of even elements.
//  Date :                       23/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
int Evencnt(int Arr[],int iLength)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iCnt++;
		}
	}
	return iCnt;
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
	iRet=Evencnt(arr,iSize);
	printf("frequncy of even elements is : %d",iRet);
	free(arr);
	return 0;
}