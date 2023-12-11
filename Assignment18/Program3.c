



//Accept Number of rows and number of colmns from user and display below pattern

/*
Input  : iRow = 3   iCol = 5
           1  2  3  4

Output :   5  4  3  2  1  
           5  4  3  2  1
           5  4  3  2  1
           
        
          

Program layout :

*/
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to pattern which print * and # ,which contains 3 rows and 4 colms
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer
//            Date                   : 04 Nov 2023         
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow ,int iCol)

{   
    int iCnt1 = 0;
    int iCnt2 = 0;

   for(iCnt1 = 1 ; iCnt1 <= iRow; iCnt1++) //Inner loop
   {
      for(iCnt2 = iCol; iCnt2 >= 1; iCnt2--) //Outer loop
      {
          printf("%d ",iCnt2);
       }
      printf("\n\n");
   }
      
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                Entery point function from where execution get starts
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()

{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    printf("Enter Number of Rows and number of colm :");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2); 

    return 0;

}
