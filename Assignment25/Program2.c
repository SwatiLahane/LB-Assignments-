
///Accept Character from user .if character is capital display its corresponding small caracter and if character Small then display its 
//corespondingg capital ,in other cases display as it is

#include <stdio.h>
void Display(char ch)
{   
     char Alpha = '\0';
    if(ch >='A' && ch <='Z'  || ch >='a' && ch <='z')
      
      {
         Alpha = (ch +32);
         printf("%c" ,Alpha);
      }
      else
      {
        Alpha=(ch -32);
         printf("%c" ,Alpha);
      }
      
                 
}


int main()
{   
    char cValue = '\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}