
//Accept one Number from user and print that number of stars
//



#include<stdio.h>

void Display(int iNo1)
{ 
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo1; iCnt++) //for loop
    {
        printf("* "); //loop body
    }
    

}


int main()
{
   auto int iValue1 = 0; //Variable to store value

   printf("Enter Number:\n");
   scanf("%d",&iValue1);

   Display(iValue1);//Function call


    return 0;

}
//Step 5: test cases 
/*
   input :10 
   output : 10 time star on screen

   input :-10 case of negative value
   output : No out in

   input :100
   output :100 times star on screen


*/