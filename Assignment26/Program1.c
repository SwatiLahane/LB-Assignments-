
#include<stdio.h>
//1.Write a program which accept string from user and count number of capiatal characters

//Input Marvellous : "Marvellous Multi OS"

//Output 4

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CountCapital
//             Description            :    Function to count Capital letters in string 
//             Intput Argument        :    Integer
//             Output Argument        :    Integer
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;
    //filter

   
   while(*str != '\0')
   {
       if((*str >= 'A') && (*str <= 'Z'))
       {
           iCnt++;
       }
       str++;
   }
   return iCnt;

}


int main()
{

    char arr[20];
    int iRet = 0;

    printf("Enter Stiring\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);
    printf("Frequency  of capital character :%d\n",iRet);

    return 0;
    
}
