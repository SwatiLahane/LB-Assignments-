

//Write a program which accept number from user and display its digits in reverse

#include<stdio.h>

void DisplayDigit(register int iNo)
{
    auto int iDigit = 0;
    
    if(iNo < 0)  //Updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
   
    iDigit = iNo % 10; 
    printf("%d\n",iDigit);
    iNo = iNo / 10;
    
    }
    
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                Entry Point function from where execution get starts
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

   auto int iValue = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   DisplayDigit(iValue); //Function call

    return 0;
}

//Test Steps 
/*
 intput :2395
 Output :5
         9
         3
         2

Input : 1018
Output: 8
        1
        0
        1

Input : -1018
Output: 8
        1
        0
        1

Input : 9000
Output: 0
        0
        0
        9
*/
