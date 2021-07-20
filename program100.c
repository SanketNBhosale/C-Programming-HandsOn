#include<stdio.h>
typedef unsigned int UI;
void DisplayBinary(UI iNo)
{
	UI iDigit=0;
	while(iNo > 0)
	{
		iDigit=iNo%2;
		printf("%d",iDigit);
		iNo=iNo/2;
		
	}

}
int main()
{
	UI iNo=0;
	printf("Enter Number : ");
	scanf("%d",&iNo);
	DisplayBinary(iNo);
	return 0;
}