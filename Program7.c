//Accept number from user and check whether it is divisible by 3 and 5
//Input : 10
//output :No
//input :15
//Output : yes

#include<stdio.h>
#include<stdbool.h>



/////////////////////////////////////////////////////////////////
//Function name:CheckDivisible						
//input:integer										
//output:boolean
//Description:It checks whether number id divisible by 3 and 5									
//date:01/03/2021									
//Author:Sanket Narayan Bhosale						
//////////////////////////////////////////////////////////////////
bool CheckDivisible(int iNo1)
{
	if (((iNo1 % 3) == 0)  &&  ((iNo1 % 5) == 0))
	{
		return true;
	}
	else
	{
		return false;
	}

}
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("enter the Number  :  ");
	scanf("%d",&iValue);
	bRet=CheckDivisible(iValue);
	if(bRet==true)
	{
		printf("%d is divisible by 3 and 5",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 and 5",iValue);
	}
	return 0;
}