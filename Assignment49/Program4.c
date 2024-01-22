
#include<stdio.h>
//Write a recursive program which accept number from user and return its factorial
//5 = 5*4*3*2*1 = 120

int Fact(int iNo)
{
   static int iFact = 1;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iFact = iCnt * iFact;
        iCnt++;
        Fact(iNo);//Recursive call
        
    }

    return iFact;
}


int main()
{
     int iValue = 0;
   int iRet = 0;
   printf("Enter Number :");
   scanf("%d",&iValue);

   iRet = Fact(iValue);
   printf("Factorial is : %d  ",iRet);

    return 0;
}

