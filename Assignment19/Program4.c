//Problem statement:3.Problem statement :Accept Number of Rows and number of columns from user and display below pattern

/*Input  iRow = 4  icolm = 5
              1  2  3  4
                   //colm
 /* Output :  4  4  4  4
       row    3  3  3  3
              2  2  2  2
              1  1  1  1

 */         


#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              Function Name       : Pattern
//              Description         : Function to print Square patter of Capital Alphabet   
//              INput Argument      : Integer ,Integer
//              Output Argument     : Integer ,Integer
//              Date                : 04 Nov 2023
//              Author              : Swati Vinayak Lahane
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to display alphabet Pattern in 4 by 5 Matrix

void Pattern(int iRow ,int iColm)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    
  for(iCnt1 = 4; iCnt1 >= 1; iCnt1--)   //Inner Loop
  {  
      for(iCnt2 = iColm; iCnt2 >= 1 ; iCnt2--) //Outer Loop
      {
          
            printf("%d\t",iCnt1);
         
      }

      printf("\n\n");
  }

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//       Entry point function from where execution get starts
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 int main()

 {

    auto int iValue1 = 0;
    auto int iValue2 = 0;

    printf("Enter number of rows and number of columns: ");
    scanf("%d%d" ,&iValue1, &iValue2);

    Pattern(iValue1 ,iValue2); //Function Call

     return 0;
 } 