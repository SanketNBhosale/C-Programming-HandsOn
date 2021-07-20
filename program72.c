#include<stdio.h>
void Display(char str[])
{
	int i=0;
	printf("characters from string are \n ");
	while(str[i] != '\0')
	{
		printf("%c\n",str[i]);
		i++;
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