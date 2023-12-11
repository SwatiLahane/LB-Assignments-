//Problem statement ://Accept character from user and check wheather it is special symbol or not (!,@,#,$,%)

#include<stdio.h>
#include<stdbool>
#define TRUE 1
#define FALSE 0

typrdef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :CheckSpecial
//            Function Description   :Function to check charcter is special or not
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer, Integer
//            Date                   :011 Nov 2023         
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL CheckSpecial(char ch)
{
   
}


int main()
{

   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("ENter the character");
   scanf("%c",&cValue);

   bRet = CheckSpecial(cValue);

   if(bRet == TRUE)
   {
       printf("It is special character");

   }
   else
   {
       printf("It is Not a special character");
   }

    return 0;
}