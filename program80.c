#include<stdio.h>
int countcapital(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str>='A') && (*str<='Z'))
				{
			iCnt++;
		}
		str++;
		
	}
	return iCnt;
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
	iRet=countcapital(Arr);
	printf("Frequency of capital letters  is %d\n",iRet);
	return 0;
}