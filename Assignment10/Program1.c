
//Problem statement :Write a program which accept range from user and display all numbers in between that range

#include<stdio.h>


//Function to accept starting point and ending point numbers and display range between two

void RangeDisplay(int iStart , int iEnd)
{
        register int iCnt = 0;
 
    if(iStart > iEnd)        //Updator
    {
        printf("Invalid Range");
    }
  for(iCnt= iStart; iCnt <= iEnd; iCnt++) //logic
   {
      printf("%d ",iCnt);
   }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                Entry Point Function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{

      int iValue = 0;      //Variable to store ivalue
      int iValue1 = 0;     //Variable to store ivalue1

      printf("Enter Staring point :");  //TO Display msg on console
      scanf("%d",&iValue);            //TO accept input from keybord

      printf("Enter Ending point :");  //TO Display msg on console
      scanf("%d",&iValue1);             //TO accept input from keybord
 

     RangeDisplay(iValue,iValue1); //Function call


    return 0;
}
