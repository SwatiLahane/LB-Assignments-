
//Problem Statement :Write a program which accept number from user and return the count of digits in between 3 and 7

#include<stdio.h>

int CountRange(int iNo)
{
    auto  int iDigit = 0;
    auto int iCount = 0;
   
      if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
              iDigit = iNo % 10; 
              {
                if(iDigit >= 3 && iDigit <=7)  //To check if digit between 3 and  7
                  {
                        iCount++;  //
                  }
                    iNo = iNo / 10;
              }
       
    }
   
   return iCount;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);//Function call

    printf("%d" , iRet);

    return 0;

}

//Test Steps
/*
  Input : 2395
  Output :2

  Input :1018
  Output: 0

  INput : 4521
  Output :2
 
  iNput : 9922
  Output: 0

  Input :0128 
  output: 0
*/