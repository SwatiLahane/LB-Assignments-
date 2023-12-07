//2.Accept number from user and display below pattern
//Input  : 5
//Output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print linear Pattern
//            Input Argument         :Integer 
//            Output Argument        :Integer
//            Date                   : 04 Nov 2023         
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{  
    int iCnt = 0 ;
    for(iCnt = iNo ; iCnt >= 1; iCnt--)
   {
     printf("%d\t#\t",iCnt);
   }

}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//          Entry point function from where execution gets started
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{

   int iValue = 0;
   printf("Enter number of elements ");
   scanf("%d",&iValue);
   
   Pattern(iValue);
   return 0;

}