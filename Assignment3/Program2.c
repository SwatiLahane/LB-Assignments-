
// problem statement : Write a program which accept number From user and print factors of that number



/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :PrintFactor 
//    Description       :this program print factor of given Number
//    Input Argument    : Integer 
//    Output Argumenrt  : Integer
//    Author            : Swati Vinayak Lahane
///   Date              : 09 /10 /2023
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//Function to Print Factors of Number 

void DisplayFactors(int iNo)
{
      register int iCnt = 0;
          
             if(iNo <= 0)    //Updator
             {
               iNo = -iNo;
             }


      for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  
      {
        
       if(iNo % iCnt == 0 )
        {
         

           printf("%d ",iCnt);
              
         
        }
            
      }  
      
}
int main()          //Entry Point function
{

   auto int iValue = 0; //Variable to store Value 
   
   printf("Enter Number :\n"); //TO print on screen
   scanf("%d",&iValue);        //To store input Variable 

   DisplayFactors(iValue); //Function call


    return 0;
}

//Time Complexity  : O(N/2)

//Test Cases
/*
Input  : 12
Output : 1,2 ,3,4,6

Input  : 6
Output :1,2 ,3

Input  :24
Output :1,2,3,4,6,8,12

*/