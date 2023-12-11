#include<stdio.h>

//1. Write a program which accept string from user and Display only digits from that String
//Input : "marve89llous121"
//Output: "89121"

//Input :"Demo"
//Output: 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CheckVowel
//             Description            :    Function to convert Upper Case
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayDigit(char *str)
{
    int icnt =0;
   while(*str != '\0')
   {
       if(*str >= '0' && *str <= '9')
       {
        //logic 
       }
        str++;
   } 
   
}


int main()
{
    char Arr[20];
    
    printf("Enter the Stirng\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);
    
  
    return 0;
}