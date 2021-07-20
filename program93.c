#include<stdio.h>
void strcpyRevX(char src[],char dest[])
{
	int iCnt=0;
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src != '\0')
	{
		src++;
		iCnt++;
	}
	src--;
	while(iCnt > 0 )
	{
		*dest=*src;
		src--;
		dest++;
		iCnt--;
	}
	*dest='\0';
	
}

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter String : \n");
	scanf("%[^'\n]s",arr);
	strcpyRevX(arr,brr);
	printf("after copy string is : %s\n",brr);
	return 0;
}