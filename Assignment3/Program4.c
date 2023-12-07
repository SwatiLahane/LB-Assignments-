

//Problem Statement : Accept one character from user and convert case of that Character

#include<stdio.h>

void DisplayConvert(char CValue)
{      
       
       
      if(CValue + 32)
      {
       printf("%c",CValue + 32);
      
      }
      else if(CValue-32)
      {
          printf("%c",CValue -32);
      }

 }


int main()
{
         auto char cValue = '\0';
         printf("Enter Character\n");
         scanf("%c",&cValue);

        DisplayConvert(cValue); //Function Calll
        
     return 0;

}