//Problem statement:2.Problem statement :Accept Number of Rows and number of columns from user and display below pattern


/*Input  iRow = 3  icolm = 5
              1  2  3  4
                   //colm
 /* Output :  A  A  A  A  A
       row    B  B  B  B  B
              C  C  C  C  C
              

 */         


#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              Function Name       : Pattern
//              Description         : Function to print Square patter of Capital Alphabets   
//              INput Argument      : Integer ,Integer
//              Output Argument     : Integer ,Integer
//              Date                : 04 Nov 2023
//              Author              : Swati Vinayak Lahane
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to display alphabet Pattern in 3 by 5 Matrix

void Pattern(int iRow ,int iColm)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    char Ch = '\0';
  
  for(iCnt1 = 1,Ch = 'A'; iCnt1 <= iRow; iCnt1++, Ch++)  //Inner Loop
  {  
      for(iCnt2 = 1; iCnt2 <= iColm ; iCnt2++)  //Outer Loop
      {
          printf("%c\t",Ch);
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