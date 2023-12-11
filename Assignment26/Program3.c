
#include<stdio.h>

/*3.Write a program which accept string from user and return difference between Frequency of small
characters and drequency of capital characters  */

//Input  : "Marvellous"
//Output : 6  (8-2)  incomplete

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    Difference
//             Description            :    Function to calculate difference between small and capital character
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Difference(char *Str)
{
    
    int icnt = 0;
    int icnt1 = 0;
    int Result = 0;
         
    
    while(*Str != '\0')
    {
        if((*Str >= 'A') && (*Str <= 'Z'))
        {
            icnt++;
        }
        else if ((*Str >= 'a') && (*Str <= 'z'))
          
         {
           icnt1++;
         } 
         Result = icnt1 - icnt;
         
        *Str++;
    }
  return Result;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference between small and capital letter: %d",iRet);

    return 0;
}