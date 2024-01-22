//3 Write a recursion program which accept string  from user and count number of character
#include<stdio.h>

int Strlen(char *str)
{    
    static int iCount = 0;
    if(*str != '\0')
    {
       iCount++;
       str++;
       Strlen(str);
    }
    
   return iCount;
}



int main()
{    
    char Arr[30] ;
    int iRet = 0;

    printf("Enter Number :");
    //scanf("%s",Arr);
     scanf("%[^'\n']s",Arr);

    iRet = Strlen(Arr);
    printf("Character Count is : %d ",iRet);

    return 0;
}