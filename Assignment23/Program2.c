
//   irow = 5 icol =5     
  
//     *   *   *   #   
//     *   *   #   @   
//     *   #   @   @  
//     #   @   @   @   
//                 
       
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print star pattern ,which contains 4 rows and 4 colm 
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer, Integer
//            Date                   :11 Nov 2023         
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
   int i = 0;
   int j = 0;

   for(i =1; i<=iRow; i++)  //Inner loop
   {
       for(j =1; j <=iCol; j++) //Outer loop
       {

         if( j == iRow + 1-i) 
    
        {
           printf("#\t");
        }
        
        else if( i<=iRow - 1+j)
         {
               printf("*\t");
         }
         else (j > iRow -1 +i)
         {
             printf("@\t");
         }
    
      }
       printf("\n\n");
   
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function from where execution get starts
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter Number of rows :\n");
   scanf("%d",&iValue1);

   printf("Enter Number of columns :\n");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);

    return 0;

}