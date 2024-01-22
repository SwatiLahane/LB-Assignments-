#include<stdio.h>
//Write a recursive program which display below pattern 
//Input : 5

//Output : 5 4 3 2 1
void Display(int iNo)
{
    //static int iCnt = 5;

    if(iNo >= 1)
    {
         printf("%d\t",iNo);
         iNo--;
         Display(iNo); //Recursive call
    }

         
}


int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue); //function call
    return 0;
}



