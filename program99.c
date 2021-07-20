
//best programming practice in company
#include<stdio.h>
void strNcpyX(char src[],char dest[],int N)
{
	int iCnt=0;
	if(src==NULL || dest==NULL)
	{
		return;
	}
	if(N<=0)
	{
		return;
	}
	while((*src != '\0')&&(N>0))
	{
		iCnt++;
		*dest=*src;
		src++;
		dest++;
		N--;
	}
	*dest='\0';
	
}

int main()
{
	char arr[30];
	char brr[30];
	int iNo=0;

	printf("Enter first String : \n");
	scanf("%[^'\n]s",arr);
	printf("Enter number of elements to copy : \n");
	scanf("%d",iNo);

	strNcpyX(arr,brr,iNo);
	printf("after copying string is : %s\n",brr);
	return 0;
}