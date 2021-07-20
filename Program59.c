//Accept N numbers from user and allocate memory dynamically.
//Display that numbers
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Input :                     Integer *,Interger
//  Output :                  void
//  Description :        It is used to display  Elements of array.
//  Date :                       21/03/2021
//  Author :                  Sanket Narayan Bhosale
//
/////////////////////////////////////////////////////////////
void Display(int Arr[],int iLength)
{
	printf("Elements from the array are\n ");
	for(int i=0;i<iLength;i++)               //step6
	{
		printf("%d\n",Arr[i]);
	}


}
int main()
{
	int *arr=NULL;    //step 1
	int iLength=0;
	printf("Enter No.of Elements");    //step2
	scanf("%d",&iLength);

	arr=(int*)malloc(iLength * sizeof(int));   //step3
	printf("Enter the Elements \n");           //step4
		for(int i=0;i<iLength;i++)
		{
			scanf("%d",&arr[i]);
		}
		Display(arr,iLength);           //step 5

		free(arr);           //step 7



	return 0;
}