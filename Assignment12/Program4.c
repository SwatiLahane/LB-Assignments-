
//Problem Statement :Write a program which accept number from user and return inMultiplication of all digits

#include<stdio.h>

int MultDigit(int iNo)
{
    auto int iDigit = 0;
    auto int iMul = 1;
    
    
      if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10; 
        

        if(iDigit == 0)
        {
            iDigit++;

        }

         iMul = iMul * iDigit;
        
        iNo = iNo / 10;
    }
    return iMul; 
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);//Function call

    printf("%d" , iRet);

    return 0;

}

//Test Steps
/*
  Input : 2395
  Output :270

  Input :1018
  Output: 8

  INput : 9440
  Output :144
 
  iNput : 922432
  Output: 864

*/