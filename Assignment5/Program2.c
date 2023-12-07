
//Write a program which accept one number from number and check wheather thaat number is greater

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//    Function Name    :           CheckGrater
//    Description      :           It is used to check greater number 
//    Input Argument   :           Integer 
//   Output Argument   :           BOOl
//   Author            :           Swati Vinayak Lahane 
//   Date              :           16 /10 /2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//Function to Check number is grater 

    BOOL CheckGreater(int iNo)
    {
      /* if(iNo < 0)
       {
         iNo = -iNo;
       } */
        if(iNo >100)
        {

            return TRUE;

         } 
       else 
        {
            return FALSE;
        }

    }
   
    
int main()         //Entry Point Function
{
    auto int iValue = 0; // variable to store Number 
    BOOL iRet = FALSE;       

    printf("Enter Number \n"); // To Print on screen
    scanf("%d",&iValue);       //To Accept Input 

   iRet = CheckGreater(iValue); //Function call
   
   if(iRet == TRUE)              
    {
       printf("Greater");
    }

  else
    {
      printf("Smaller");

    }
    return 0;
}


//5 .Text CASES
/*
 Input :101
 output :Greater

 Input :39
 output :Smaller




*/