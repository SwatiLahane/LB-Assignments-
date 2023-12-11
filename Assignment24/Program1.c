
//problem Statement :Accept character from user and check wheather it is alphabet or not (A-Z,a-z)

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
//Input  : F
//Output : TRUE

//Input : & 
//Output : FALSE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    Pattern
//             Description            :    Function to check character  
//             Intput Argument        :    Character
//             Output Argument        :    Character
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    12 November 2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL CheckAlpha(char ch)
{
   if(ch >='A' && ch <='Z' || ch >= 'a' && ch <= 'z') 
   {
        return TRUE;
   }
   else
   {
       return FALSE;
   }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                               
//                               Entry Point Function from where execution get starts
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;
  
  printf("Enter the character:");
  scanf("%c" ,&cValue);

  bRet  = CheckAlpha(cValue); //Function call
  if(bRet == TRUE)
  {
      printf("It is Character");

  }
  else
  {
      printf("It is not a Character");
  }

    return 0;
}