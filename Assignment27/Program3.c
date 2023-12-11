
#include<stdio.h>

//1. Write a program which accept string from user and toggle the case
//Input : "Marvellous Multi OSs"
//Output : mARVELLOUS mULTI os
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CheckVowel
//             Description            :    Function toggle the case
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void strwrx(char *str)
{
   while(*str != '\0')
   {
       if(*str >= 'A' && *str <= 'Z')
       {
          *str = *str + 32;
       }
       else if(*str >= 'a' && *str <= 'z')
       {
          *str = *str - 32;
       }
        str++;
   } 
   
}


int main()
{
    char Arr[20];
    
    printf("Enter the Stirng\n");
    scanf("%[^'\n']s",Arr);

    strwrx(Arr);
    printf("Modified string is %s",Arr);

    return 0;
}