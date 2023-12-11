

//5.Accept Number of rows and columns from user and display below patter


//Input      iRow = 4  iCol = 4

/*
 1   1  1  1  1  1
 2   2  2  2  2  2
 3   3  3  3  3  3
 4   4  4  4  4  4

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print number pattern ,which contains 4 rows and 4 colm 
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer, Integer
//            Date                   : 04 Nov 2023         
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iRow ,int iCol)

{   
    int iCnt1 = 0;
    int iCnt2 = 0, k=0;

   for(iCnt1 = 1 ; iCnt1 <= iRow; iCnt1++) //Inner loop
   {
      for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++) //Outer loop
      {
           
           printf("%d\t",iCnt1);
            
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
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2); 

    return 0;

}
