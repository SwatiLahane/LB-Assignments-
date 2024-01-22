 //Write a recursive program
 // Input : 5
 //Output : *  *   *   *   *   *
#include<stdio.h>

void Display(int iNo)
{
   static int iCnt = 0;
   if(iCnt <= iNo)
   {
       printf("*\t");
       iCnt++;
       Display(iNo); //Recursive function
       
   } 
   
   
}

 int main()
 { 
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue); //Function call
    return 0;
 }