
//5.Accept Number of rows and number columns from user and display below patter

//Input : iRow = 3 iCol = 4

 /* Output :  
           2  4  6   8  10
           1  3  5   7   9     
           2  4  6   8  10
           1  3  5   7   9  

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
    int iCnt2 = 0;
    int k = 0 , q=0;
        
        
   for(iCnt1 = 1  ; iCnt1 <= iRow; iCnt1++ ) //Inner loop
   {  
            
      for(iCnt2 = 1 ,k =1 ; iCnt2 <= iCol; iCnt2++) //Outer loop
      {
            if(iCnt1 % 2 != 0)
            {
               printf("%d\t", iCnt2 *2);
            }
            
            else
            {
               printf("%d\t", iCnt2*2-1);
               
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
