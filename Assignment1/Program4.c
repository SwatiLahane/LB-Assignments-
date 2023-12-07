//Provlem statement :Accept one number and check whether it is divisible by 5 or not
//conclusion :We have to accept one number from and check whether its divisible by 5 or not
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


int check(int iNo)

{

  if((iNo % 5) == 0)
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
   auto BOOL iRet = FALSE;

   printf("Enter Number:\n");
   scanf("%d",&iValue);

   iRet = check(iValue);

   if(iRet == TRUE)
   {
       printf("Divisible by 5");
   }
   else
   {
       printf("Not Divisible by 5");
   }

    return 0;
}