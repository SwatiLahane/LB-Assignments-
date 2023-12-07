

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
   int fact = 1;

   if(iNo < 0)
   {
       iNo = -iNo;
   }
   for(iCnt = 1; iCnt <= iNo ; iCnt ++)
   {
       if(iCnt % 2 == 1)
       {
           fact = iCnt * fact;
                  
       }
       
   
   }
        return fact;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue); //Function Call 
    printf("Odd Factorial is %d ", iRet);
     

    return 0;

}