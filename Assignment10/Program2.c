



//Problem statement :Write a program which accept range from user and display all even numbers in between that range.
//s(Range should contains positive numbers only)

#include<stdio.h>

void RangeDisplayEven(int iStart ,int iEnd)
{
    register int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

     for(iCnt= iStart; iCnt <= iEnd; iCnt++) //logic
   {
       if(iCnt % 2 == 0)
       {
           printf("%d ",iCnt);
       }
   
 }
 
}

int main()
{
      auto int iValue = 0;      //Variable to store ivalue
      auto int iValue1 = 0;     //Variable to store ivalue1
     

      printf("Enter Staring point :");  //TO Display msg on console
      scanf("%d",&iValue);            //TO accept input from keybord

      printf("Enter Ending point :");  //TO Display msg on console
      scanf("%d",&iValue1);             //TO accept input from keybord
 

       RangeDisplayEven(iValue,iValue1); //Function call
     

    return 0;

    return 0;
}