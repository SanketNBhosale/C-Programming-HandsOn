
// Accept 2 numbers fro user and return the maximum and minimum number.

/*
 Algorithm for maximum
 
    START
        Accept first number as no1
        Accept second number as no2
 
        if no1 is greater than no2
            then no1 is maximum
        otherwise
            no2 is maximum
 
    STOP
 */

// include the user defined file

# include "Header2.h"

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    iRet = Maximum(iNo1,iNo2);
    
    printf("Maximum number is : %d\n",iRet);
    return 0;
}

// OS -> main -> Maximum -> main -> OS









