
//problem Statement :Accept character from user and check wheather Capital  or not (A-Z)

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
//Input  : F
//Output : TRUE

//Input : d
//Output : FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    Pattern
//             Description            :    Function to check capital character or not   
//             Intput Argument        :    Character
//             Output Argument        :    Character
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    12 November 2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Function to check Alphabet or not (A-z and a-z) 

BOOL CheckCapital(char ch)
{
   if (ch >= 'A'  && ch <='Z')
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

      printf("It is Capitat character");

  }
  else
  {
      printf("It is not a Capital Character");
  }

    return 0;
}