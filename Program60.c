//Accept N numbers from user and allocate memory dynamically.
//display only even numbers from that N numbers
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  DisplayEven
//  Input :                     Integer *,Interger
//  Output :                  void
//  Description :        It is used to display  Even elemnts of array.
//  Date :                       22/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void DisplayEven(int Arr[],int iLength)
{
	if((Arr == NULL || (iLength <=0)))
	{
		return;
	}
	printf("even elements of array is :  \n");
	for(int i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}


}
int main()
{
	int * Arr=NULL;
	int iLength=0;
	printf("Enter no of elements \n");
	scanf("%d",&iLength);

	Arr=(int*)malloc(iLength * sizeof(int));
	if(Arr == NULL)
	{
		printf("Unable to allocate dynamic memory");
		return -1;
	}
	printf("Enter the elements \n");
	for(int i=0;i<iLength;i++)
	{
		scanf("%d",&Arr[i]);
	}

	DisplayEven(Arr,iLength);

	return 0;
}