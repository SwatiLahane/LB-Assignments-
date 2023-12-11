


//problem Statement :Accept Division of student from user and depends on the division display exam timing. 
//there are 4 divisions in school As  A ,B,C,D.Exam of division  A at 7 AM ,B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//(Application should be case sensitive)


#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Input  : C
//Output : Your Exam at 9.29am

//Input  : d
//Output : Your Exam at 10.30am


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    Pattern
//             Description            :    Function to check character  
//             Intput Argument        :    Character
//             Output Argument        :    Character
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    13 November 2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL CheckAlpha(char ch)
{
   if(ch >= 'E' && ch <='Z' || ch >='e' && ch <='z')  //Updater
   {
       printf("Invalid Division");
   }

   if(ch=='A' || ch == 'a')
   {
       printf("Exam at 7 AM");
   } 
   else if(ch == 'B' || ch == 'b')
   { 
      printf("Exam at 8:30 AM");
   }
   else if(ch== 'C' || ch == 'c')
   {
       printf("Exam at 9:20 AM");
   }
   else if(ch == 'C' || ch == 'd')
   {
       printf("Exam at 10:30 AM");
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

   CheckAlpha(cValue); //Function call
  
    return 0;
}