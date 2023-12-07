

//Problem Statement :Write a program which Accept number from user and print numbers till that number
//Conclusion we have to accept one integer number and print that number 


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
///
///       Function Name     : DiaplayNUmbers
///       Discription       : It is function used to print natural Numbers till that enterd number 
///       Input Argument    : Integer 
///       Output Argument   : Integer
///       Author            :Swati Vinayak Lahane 
///       Date              : 17 /10 /2023
////////////////////////////////////////////////////////////////////////////////////////////////




// Function to Number Natural Number 

  void Display(int iNo)
  {
      register int iCnt = 0;
      for(iCnt =1 ; iCnt <= iNo; iCnt++)
      {
          printf("%d ",iCnt);
      }

  }

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Entry Point Function
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
Input : 8
Output : 1 2 3 4 5 6 7 8 

Input : 10
Output : 1 2 3 4 5 6 7 8 9 10



*/