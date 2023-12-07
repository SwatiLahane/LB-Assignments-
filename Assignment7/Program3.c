
//Write a program to find  factorial of given Number 

//Input : 5
//Output : 120 (5*4*3*2*1 ) //5(5-1)*(5-2)*(5-3)(5-4)

//Input : -5
//Output : 120

//Input : 4
//Output : 24

int Factorial(int iNo)
{ 
     auto int icnt = 0;
     auto int fact = 1;

     if(iNo < 0)
     {
         iNo = -iNo;
     }
     for(icnt = 1 ; icnt <= iNo; icnt++)
     {
        fact = fact * icnt;
          
                 
     }

    return fact;
     
    }


#include<stdio.h>



int main()
{
   auto int iValue = 0;
   auto int iRet = 0;

   printf("Enter Number:");
   scanf("%d",&iValue);

   
    iRet = Factorial(iValue);

 printf("Factorial of Number is :%d ",iRet);

    return 0;
}