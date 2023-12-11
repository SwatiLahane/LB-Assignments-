
#include<stdio.h>

//1. Write a program which accept string from user and convert it into lower case
//Input: "MARVELLOUS MULTI OS"
//Output : "Marvellous Multi Os"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    Strwrx (lowerCase)
//             Description            :    Function to convert Upper case string  into Lower Case
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
        str++;
   } 
   
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//       entry point function from where execution get starts
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    
    printf("Enter the Stirng\n");
    scanf("%[^'\n']s",Arr);

    strwrx(Arr);
    printf("Modified string is %s",Arr);

    return 0;
}