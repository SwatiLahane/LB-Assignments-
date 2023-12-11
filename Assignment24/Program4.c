
//problem Statement :Accept character from user and check wheather it is alphabet or not (A-Z,a-z)

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Input  : g
//Output : TRUE

//Input : D 
//Output : FALSE

BOOL SmallCase(char ch)
{
   if(ch >='a' && ch<='z')
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
  char cValue = '\0';
  BOOL bRet = FALSE;
  
  printf("Enter the character:");
  scanf("%c" ,&cValue);

  bRet  = SmallCase(cValue); //Function call
  if(bRet == TRUE)
  {

      printf("It is Small case character");

  }
  else
  {
      printf("It is not Small case character");
  }

    return 0;
}