
//Problem statement  : Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include<stdio.h>
//#include<stdbool>

typedef int BOOL;
# define TRUE 1
#define FALSE 0


BOOL CheckVowel(char Ch )
           
{

     if(Ch=='a' || Ch == 'e' || Ch == 'i'|| Ch == 'o'|| Ch == 'u')

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
    
    auto char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);
    
    bRet = CheckVowel(cValue);//Function Call

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");

    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}