

#include<stdio.h>

//1. Write a program which accept string from user and convert it into Upper case
//Input : "Marvellous Multi Os"
//Output: "MARVELLOUS MULTI OS"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    struprx(String upper case)
//             Description            :    Function to convert Lower case to Upper Case
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void struprx(char *str)
{
   while(*str != '\0')
   {
       if(*str >= 'a' && *str <= 'z')
       {
          *str = *str - 32;
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

    struprx(Arr);
    printf("Modified string is %s",Arr);

    return 0;
}