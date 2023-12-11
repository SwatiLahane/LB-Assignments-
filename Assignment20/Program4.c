
//4.Accept Number of rows and number columns from user and display below patter

/*
Input : iRow = 5 iCol = 5

Output : 1  2   3  4  5 
        -1 -2  -3 -4 -5
         1  2   3  4  5 
        -1 -2  -3 -4 -5

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print pattern  
//            Input Argument         :Integer ,Integer
//            Output Argument        :Character ,Integer
//            Date                   :04 Nov 2023         
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow ,int iCol)
{   
    int iCnt1 = 0;
    int iCnt2 = 0;
    char ch = '\0';
    
   for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++ ) //Inner loop
   {  
            
      for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++, ch++) //Outer loop
      {
            if(iCnt1 % 2 != 0)
            {
               printf(" %d\t",iCnt2);
            }
            
            else
            {
                printf("%d\t",-iCnt2);
               
            }

    
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
