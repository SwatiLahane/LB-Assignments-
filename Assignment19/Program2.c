//Problem statement:2.Problem statement :Accept Number of Rows and number of columns from user and display below pattern


/*Input  iRow = 4  icolm = 4
              1  2  3  4
                   //colm
 /* Output :  A  B  C  D
       row    a  b  c  d
              A  B  C  D
              a  b  c  d

 */         


#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              Function Name       : Pattern
//              Description         : Function to print Square patter of Capital Alphabet   
//              INput Argument      : Integer ,Integer
//              Output Argument     : Integer ,Integer
//              Date                : 05 Nov 2023
//              Author              : Swati Vinayak Lahane
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to display alphabet Pattern in 4 by 4 Matrix

void Pattern(int iRow ,int iColm)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    char Ch = '\0';
    char Ch1 = '\0';
  
  for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
  {
      for(iCnt2 = 1, Ch = 'A' ,Ch1 = 'a'; iCnt2 <= iColm ; iCnt2++ , Ch++,Ch1++)
      {
          if(iCnt1 % 2 != 0)
          {
            printf("%c\t",Ch);
          }
          else
          {
            printf("%c\t",Ch1);
          }
         
         
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