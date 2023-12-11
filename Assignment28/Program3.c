
//Write a program which accept string from useer and accept one character .and return index of first occurance of that character

//incomplete
#include<stdio.h>



/*Input :"Marvellous Multi OS"
          M
Output : TRUE
/*Input :"Marvellous Multi OS"
          W
Output : FAlse
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    FirstChar
//             Description            :    Function to check first occurance of character
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Firstchar(char *str, char ch)
{   
  int icnt =0;
  int i=0;
  while(*str != '\0')
  {
        for(i =0;str[ch]; i++)
        {
          if(*str == ch)
          {
            icnt++;
          }
        
        }
      
     
      str++;
  }
  
}
int main()
{
   
    char Arr[20];
    char cValue = '\0';

    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = Firstchar(Arr,cValue);    

    printf("Character location is %d",iRet);

    return 0;
}