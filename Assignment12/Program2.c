
//Problem Statement :Write a program which accept number from user and return the count of odd digits

#include<stdio.h>

int CountOdd(int iNo)
{
    auto int iDigit = 0;
    auto int iCount = 0;

      
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)  //Logic to find odd digit in number 
        {
            iCount++;  // count++ to store the odd Numbers 
        }
        iNo = iNo / 10;
    }

   return iCount;        //Return count to caller function to print the result on screen
}


int main()
{
   auto int iValue = 0;
   auto int iRet = 0;

   printf("Enter a number :");
   scanf("%d" , &iValue);

   iRet = CountOdd(iValue);

   printf("%d",iRet);

    return 0;
}
//Test  Step
/* 
 Input : 1018
 Output: 2

 Input :-1018
 Output :2

 Input ;8462
 Output :0

*/