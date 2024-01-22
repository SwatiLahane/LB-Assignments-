
//Write a recursive fumction
//Input : 5
//Output : 1  2  3  4  5 

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        Display(iNo);//recursive call
    }
}
 


int main()
{
    int iValue = 0;
    printf("Enter Number :"); //
    scanf("%d",&iValue);

    Display(iValue); //Function call

    return 0;
}