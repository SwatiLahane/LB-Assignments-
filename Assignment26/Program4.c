#include<stdio.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

/*4.Write a program which accept string from user and check whether it contains ovel or not
characters and drequency of capital characters  */

//Input  : "marvellous" 
//Output :True
//Input  : "Demo" 
//Output :True
//Input  : "xyz" 
//Output : False

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CheckVowel
//             Description            :    Function to check whether characer contains vowel or not
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL CheckVowel(char *Str )
{
    int icnt = 0;
    
    while(*Str != '\0')
    {
       if(*Str == 'a' || *Str == 'e' ||*Str == 'i' ||*Str == 'o' ||*Str == 'u' || *Str == 'A' || *Str == 'E' || *Str == 'I' || *Str == 'O' || *Str == 'U' )
       {
           return TRUE;
       }
       
       Str++;
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                          Entry point function from where execution get starts
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr); //Static memory allocation

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

  return 0;
}