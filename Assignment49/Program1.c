#include<stdio.h>

//Head Recursion
//1. Write a recursive program which accept numbe a from user 
// Input : 5
//Output : 5 * 4 * 3 * 2 * 1  *

void Display(int iNo)
{  
    //int iCnt  = 5 ;
    while(iNo >=  1)
    {
        printf("%d\t*\t",iNo);
        iNo--;

    }


}

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;
}