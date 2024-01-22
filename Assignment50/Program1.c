#include<stdio.h>
//1.Write a recursive prgrm which accept string from user and count white spaces


int WhiteSpace(char *str)
{       
      static int iCount = 0;

     if(*str != '\0')
     {
         if(*str == ' ')
         {
             iCount++;
         }
         str++;
         WhiteSpace(str);
     }

     return iCount;
}




int main()
{
   char Arr[20];
   int iRet = 0;

   printf("Enter String :");
   scanf("%[^'\n']s",Arr);

   iRet = WhiteSpace(Arr);

   printf("White spaces are : %d ",iRet);

    return 0;
}
