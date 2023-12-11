

//Problem statement :Write a program which accept String from user and count number of small character 
//
//Input : 9
//Output: "Marvellous"

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CountSmall
//             Description            :    Function to count small characters in letters 
//             Intput Argument        :    char
//             Output Argument        :    char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *Str)
{
    int icnt = 0;
     
         
    
    while(*Str != '\0')
    {
        if((*Str >= 'a') && (*Str <= 'z'))
        {
            icnt++;
        }
        *Str++;
    }
  return icnt;
}


int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Frequency of small letter: %d",iRet);

    return 0;
}