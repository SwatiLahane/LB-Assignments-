
//2Write a recursive program 
//Otput : 1  2  3  4  5
#include<stdio.h>
void Display(int iNo)
{
    static int iCnt = 1;
    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        Display(iNo); //Recursive call

    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue); //Function call
     
     return 0;
   
}