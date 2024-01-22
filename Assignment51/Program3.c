
//2Write a recursive program 
//Otput : 5  4   3  2  1

#include<stdio.h>
void Display(int iNo)
{
    //static int iCnt = 5;
    if(iNo != 0) 
    {
        printf("%d\t",iNo);
        iNo --;
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