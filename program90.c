#include<stdio.h>
#include<stdlib.h>
void Reverse(char str[])
{
	char *start=str;
	char *end=str;
	char temp;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
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
	Reverse(Arr);
	printf("%s",Arr);
	return 0;
}