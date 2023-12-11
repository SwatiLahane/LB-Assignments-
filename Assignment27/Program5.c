#include<stdio.h>

//1. Write a program which accept string from user and c case
//Input : "Marvellous Multi Os"
//Output: "MARVELLOUS MULTI OS"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CountWhite
//             Description            :    Function to count White spaces in whole string
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountWhite(char *str)
{
     int icnt = 0;
   while(*str != '\0')
   {
       if(*str ==' ')
       {
         icnt++;
       }
        str++;
   } 
   return icnt;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                 Entry point function from where execution get starts
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter the Stirng\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);
    printf("%d",iRet);
    

    return 0;
}