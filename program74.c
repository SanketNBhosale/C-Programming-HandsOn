#include<stdio.h>
void Display(char * str)
{
	printf("characters from string are \n ");
	for(;*str!='\0';str++)
	{
		printf("%c\n",*str);
	}
}

int main()
{

	char Arr[40];
	printf("enter your name :\n");
	fgets(Arr,40,stdin);   //fgets(कशात , किती , कुठून) 
	//gets(Arr);
	//scanf("%s",Arr);
	//scanf("%[^'\n']s",Arr);
	Display(Arr);
	return 0;
}