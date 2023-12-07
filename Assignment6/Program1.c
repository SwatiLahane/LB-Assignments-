

//Probleem Statement: Write a program which accept number from user and print that number of $ And * on screen

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function Name      : Pattern
//     Description        : This function is used tp print pattern 
//     Input Argument     : Integer 
//     Output Argumnet    : Integer
//     Author              : Swati Vinayak Lahane
//     Date                : 17 /10 /2023 
//
/////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Print Pattern 
void Pattern(int iNo1)
 
{
   register int iCnt = 0;
      
      if(iNo1 < 0 )

      {
        iNo1 = -iNo1;
      }

   for(int iCnt = 1 ; iCnt <= 2*iNo1; iCnt++)
  {
     // for()
      if(iCnt % 2 == 0)  //condition To print star on place of even number  
       printf("* ");

      else
      {
          printf("$ ");
      }
  }

}

//////////////////////////////////////////////////////////////////////////////////////////
//
//               Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////////////


int main()

{
   auto int iValue = 0;

   printf("Enter a Number\n");
   scanf("%d",&iValue);

    Pattern(iValue); //Function call

    return 0;

     
}

//Time Complexity :  O(2n)

//Step 5: test cases

/*
 Input : 5
Output : $ * $ * $ * $ * $ *

Input : 3
Output : $ * $ * $ * 

Input : -3
Output : $ * $ * $ * 

*/





