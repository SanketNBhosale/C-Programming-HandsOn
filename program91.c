#include<stdio.h>
#include<stdlib.h>
void DisplayASCII()
{
	printf("--------------\n");
	printf("ASCII Table\n");
	printf("--------------\n");
	printf("C\tD\tO\tX\t\n");
	printf("--------------\n");
	for(int i=0;i<=255;i++)
	{
		printf("%c\t%d\t%o\t%o\t\n",i,i,i,i);
	}

}
int main()
{
	DisplayASCII();
	return 0;
}