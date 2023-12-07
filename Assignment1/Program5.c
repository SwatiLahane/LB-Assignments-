
//Problem Sstatements:Accept one number from user and print that number of * on screen
//conclusion  :accept one integer type number and prinnt that number of * on creen


#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt =1 ; iCnt<=iNo; iCnt++)
    {
        printf("* ");
    }
     

}

int main()
{
   auto int  iValue = 0;
  

   printf("Enter number:\n");
   scanf("%d",&iValue);

    Accept(iValue);


 return 0;

}

//Step  5 :Test cases 
/*
input 5
output :* * * * * *

*/