
//problem Statement :Accept character from user and check wheather it is Digit  or not (0-9)

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Input  : 7
//Output : TRUE

//Input : d
//Output : FALSE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    Pattern
//             Description            :    Function to check Digit or Not between (0 to 9)
//             Intput Argument        :    Integer 
//             Output Argument        :    Integer
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    12 November 2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to check whether character is digit or not

BOOL CheckCapital(char ch)
{
   if (ch >= '0'  && ch <= '9')
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

  bRet  = CheckCapital(cValue); //Function call
  if(bRet == TRUE)
  {

      printf("It is Digit");

  }
  else
  {
      printf("It is Not a Digit");
  }

    return 0;
}