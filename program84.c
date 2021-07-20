#include<stdio.h>
#include<stdlib.h>
void struprX(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		if(*str>='a' && *str<='z')
		{
			*str=*str-32;
		}
		str++;
		
	}
}

int main()
{

	char Arr[40];
	int iRet=0;
	printf("enter string :\n");
	//fgets(Arr,40,stdin);   //fgets(कशात , किती , कुठून) 
	//gets(Arr);
	//scanf("%s",Arr);
	scanf("%[^'\n']s",Arr);  //best way to gett string
	struprX(Arr);
	printf("Reversed string is %s",Arr);
	return 0;
}