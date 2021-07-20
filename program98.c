
//best programming practice in company
#include<stdio.h>
void strcatX(char src[],char dest[])
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*dest != '\0')
	{
		 dest++;  
	}
	*dest=' ';
	*dest++;
	while(*src != '\0')
	{
		*dest=*src;
		*src++;
		*dest++;
	}
	*dest='\0';
	
}

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter first String : \n");
	scanf("%[^'\n]s",arr);
	printf("Enter second String : \n");
	scanf(" %[^'\n]s",brr);
	strcatX(arr,brr);
	printf("after concating string is : %s\n",brr);
	return 0;
}