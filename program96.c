
//best programming pactice in company
#include<stdio.h>
void strcpyUpperX(const char src[],char dest[])
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src != '\0')
	{
		if(*src>='a' && *src<='z')
		{
			*dest=*src-32;
		}
		else
		{
			*dest=*src;
		}
		src++;
		dest++;
	}

	*dest='\0';
}

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter String : \n");
	scanf("%[^'\n]s",arr);
	strcpyUpperX(arr,brr);
	printf("Original  string is : %s\n",arr);
	printf("after copy string is : %s\n",brr);
	return 0;
}