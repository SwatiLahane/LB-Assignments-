

//Problem Statement :Write a program which Accepts number from user and print even Factors of that number

#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :PrintEvenFactor 
//    Description       :this program will print Even factor of given Number
//    Input Argument    : Integer 
//    Output Argumenrt  : Integer
//    Author            : Swati Vinayak Lahane
///   Date              : 09 /10 /2023
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to print Even Factor of Number 

void PrintEvenFactors(int iNo)
{
      register int iCnt = 0;
      
   if(iNo < 0)
   {

         iNo = -iNo;
   }


    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)  //Loop
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0) //Logic to find even factor of Number 
        {
            printf("%d ",iCnt); //To print even factor on screen
        }

    }

}
int main()
{
   
   auto int iValue = 0; //Variable to store value

   printf("Enter number :\n");
   scanf("%d",&iValue);
 
   PrintEvenFactors(iValue);//Function Calll
    return 0;
}

