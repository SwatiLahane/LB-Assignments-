

//Problem statement ://Accept character from user and Display its ASCII value in decimal,octal and hexadecimal format

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Display 
//            Function Description   :Function to print ASCII Value in decimal
//            Input Argument         :Character
//            Output Argument        :Integer
//            Date                   :12 Nov 2023         
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch<='Z' || ch >= 'a' && ch <= 'z')
    {
        printf("ASCII value of character in decimal is :%d\n",ch);
        printf("ASCII value of character in Octal is: 0%o\n",ch);
        printf("ASCII value of character in Hexadecimal is: 0X%x\n",ch);
       
    }
}

int main()
{

   char cValue = '\0';
  
   printf("ENter the character :");
   scanf("%c",&cValue);

   Display(cValue);

    return 0;
}

