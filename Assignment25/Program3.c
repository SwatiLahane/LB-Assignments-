
//3.Problem Statement : Accept character from user .if it is capital then display all the characters from input characters till Z.
//if input character is small then print all the characters in revere order till a .in other cases return directly.


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Display
//            Function Description   :Function to print Character
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer, Integer
//            Date                   :12 Nov 2023         
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 void display(char ch)
{
    char icnt ='\0'
 
   if(ch >= 'A' && ch <= 'Z') || (ch >='a' || ch <='z')
   {
       printf("%c",ch);
   }
}

int main()
{
    char cValue = '\0';
   

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    display(cValue);

   
    return 0;
}