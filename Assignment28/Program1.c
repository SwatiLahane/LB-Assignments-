
//Write a program which accept string from useer and accept one character .check wheather that character is present in string or not


#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

/*Input :"Marvellous Multi OS"
          e
Output : TRUE
/*Input :"Marvellous Multi OS"
          W
Output : FAlse
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CheckChar
//             Description            :    Function to check whether character is present in string or not
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckChar(char *str, char ch)
{
  while(*str != '\0')
  {
      if(*str == ch)
      {
        return TRUE;
      }
      else
      {
          return FALSE;
      }
     
      str++;
  }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     ENtry point function from where execution get starts
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   
    char Arr[20];
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);    

    if(bRet == TRUE)
    {
        printf("Character Found");

    }
    else
    {
        printf("Character Not Found");
    }

    return 0;
}