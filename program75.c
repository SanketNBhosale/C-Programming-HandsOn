#include<stdio.h>
int strlenX(char str[])
{
	int iLength=0;
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	return iLength;
}

int main()
{

	char Arr[40];
	int iRet=0;
	printf("enter your name :\n");
	//fgets(Arr,40,stdin);   //fgets(कशात , किती , कुठून) 
	//gets(Arr);
	//scanf("%s",Arr);
	scanf("%[^'\n']s",Arr);  //best way to gett string
	iRet=strlenX(Arr);
	printf("Length of string is %d\n",iRet);
	return 0;
}