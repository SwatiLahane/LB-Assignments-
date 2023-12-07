

//Problem Statement :Write a program which accepts number from user and perint its numbers line

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
///
///       Function Name     : DisplayNumberLine
///       Discription       : It is function used to display number line
///       Input Argument    : Integer 
///       Output Argument   : Integer
///       Author            :Swati Vinayak Lahane 
///       Date              : 17 /10 /2023
////////////////////////////////////////////////////////////////////////////////////////////////



//Logic is incomplete
// Function to Number Natural Number 

  void Display(int iNo)
  {
      register int iCnt = 0;
      
      for(iCnt = -iNo; iCnt <=iNo; iCnt++) 
      {
        printf("%d ",iCnt);
      }

  }

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Entry Point Function from whrere execution get starts
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue); 


    return 0;
}

//Step :Test Cases
/*
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4

Input : 
Output : 


*/