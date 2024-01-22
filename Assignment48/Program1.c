#include<stdio.h>

//recursive program to display 
//Input : 5
//Output : *  *  *  *  *  
//Recursive function
void DisplayR(int iNo)
{   
      static int iCnt = 1;
     if(iCnt <= iNo)
     {
         printf("*\t");
          iCnt++;
         Display(iNo); //Recursive call
         
     }
     
}

int main()

{
   int iValue = 0;
   
   printf("Enter Number :");
   scanf("%d",&iValue);

   Display(iValue);
  

    return 0;
}