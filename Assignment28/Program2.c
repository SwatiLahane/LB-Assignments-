#include<stdio.h>


/*Input :"Marvellous Multi OS"
          M
Output : 2
/*Input :"Marvellous Multi OS"
          W
Output : 0
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    CountChar
//             Description            :    Function to count character  in String
//             Intput Argument        :    Char
//             Output Argument        :    Char
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    19 November 2023
//             
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountChar(char str[], char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     ENtry point function from where execution get starts
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    char cValue = '\0';

    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);    

    printf("Character frequency is : %d\n",iRet);  
    return 0;
}