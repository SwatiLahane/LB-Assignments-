  
  
  //Accept number from user and check whether number is even or odd
#include<stdio.h>
  #define TRUE 1
  #define FALSE 0

  typedef int BOOL ;


BOOL checkEven(int iNo)
{
   if(iNo % 2 == 0)
   {
       return TRUE;
   }
   else
   {
       return FALSE;
   }

}

int main()

{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = checkEven(iValue);//Function call
    
    if(iRet == TRUE)
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;

}