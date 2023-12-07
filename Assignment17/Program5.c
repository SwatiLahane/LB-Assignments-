
//5. Accept number from user and display below pattern 

/*
input  : 8

Output : 2 4 6 8 10 12 14 16 

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print Linear pattern
//            Input Argument         :Integer 
//            Output Argument        :Integer
//            Date                   : 04 Nov 2023         
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("%d ",iCnt * 2);
    }
}


int main()
{

   int iValue = 0;
   
   printf("Enter the Number of element :");
   scanf("%d", &iValue);
   
   Pattern(iValue); //function call 


    return 0;
}