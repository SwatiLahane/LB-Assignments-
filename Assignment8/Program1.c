

#include<stdio.h>
//Problem Statement : Write a Program Which accept accept number from user and display below pattern

/*
input 5 
Ouput : * * * * * # # # # #

input 6 
Ouput : * * * * * * # # # # # #



*/

void Display(int iNo)
{
   register int iCnt = 0;

   if(iNo < 0)
   {
       iNo = -iNo;
   }
   for(iCnt = 1; iCnt <= 2*iNo ; iCnt ++)
   {
       if(iCnt <= iNo)
       {
         printf("* ");

       }
       else
       {
           printf("# ");
       }
   }

}

int main()
{
   auto int iValue = 0;

   printf("Enter Number:\n");
   scanf("%d",&iValue);

   Display(iValue); //Function Call 

    return 0;

}