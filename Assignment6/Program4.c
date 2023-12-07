

//Problem statement : write a program which accept N number from user and printf all Odd Numbers up to That Number

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function Name      : OddDispaly
//     Description        : This function is used Display Odd Numbers 
//     Input Argument     : Integer 
//     Output Argumnet    : Integer
//     Author             : Swati Vinayak Lahane
//     Date               : 17 /10 /2023 
//
/////////////////////////////////////////////////////////////////////////////////////////////////




//Function to Display Odd Numbers 
void OddDisplay(int iNo)

{
    register int icnt = 0;  

   for(icnt = 1; icnt <= iNo; icnt++)
   {
       if(icnt % 2 == 1)   //Logic to check odd number
       {
           printf("%d ",icnt);
       }
   }

}
 
#include<stdio.h>

int main()
{
   auto int iValue = 0; 

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   OddDisplay(iValue); //Function Call
   
    return 0;

}

//Step :Test Cases
/*
Input : 18
Output : 1 3 5 7 9 11 13 17 

Input : 10
Output : 1 3 5  7  9 


*/