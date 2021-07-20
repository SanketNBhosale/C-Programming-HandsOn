#include<stdio.h>
#include<stdlib.h>
void strRev(char str[])
{
	int iCnt=0;
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	str--;
	for( ;iCnt > 0;iCnt--,str--)
	{
		
		printf("%c",*str);
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
	strRevDisplay(Arr);
	return 0;
}