
//Problem Statement :write a program which accept N and Print first 5 Multiples of N


#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//          Funnction Name      : MultipleDisplay
//          Description         : This program Dislay N number multiple  5 times
//          Input Argument      : Integer
//          Output Argument     : Integer 
//          Author              : Swati Vinayak Lahane 
//          Date                : 17 / 10 / 2023
//////////////////////////////////////////////////////////////////////////////////////////////////////////




//Write a program which ccept N and Print first 5 Multiples of N

//
void MultipleDisplay(int iNo)
{
      int icnt = 0;
     // int icnt1 = 5;

     for(icnt = 1 ; icnt <= 5 ; icnt++)
     {
        printf("%d ",icnt * iNo);
     }
        
         
}
    

int main()
{
   
   auto int iValue = 0 ;
   printf("Enter Number:\n");
   scanf("%d",&iValue);

   MultipleDisplay(iValue);



    return 0;
}


//step :Test Cases
/*
  Input 4
  Output : 4 8 12 16 20

  Input  : 5
 Output  : 5 10 15 20 25 

*/