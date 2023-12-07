

#include<stdio.h>

int EvenFactorial(int iNo)

{

   register int iCnt = 0;
   auto int fact = 1;
   auto int fact1 = 1;

   if(iNo < 0)
   {

       iNo = -iNo;

   }

   for(iCnt = 1; iCnt <= iNo ; iCnt ++)
   {
       if(iCnt % 2 == 0  )
       {
           fact = iCnt * fact;
         
       }
       if(iCnt % 2 != 0)
       {
           fact1 = iCnt * fact1;
                  
       }
      
   }
        return fact -fact1;
}

int main()
{

    auto int iValue = 0;
    auto int iRet   = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue); //Function Call 
    printf("Factorial difference is %d ", iRet);
     

    return 0;

}

//Step : test Cases

/*
  Input  : 5   (8 - 15)
  Output : -7
 
  Input  : -5 (8-15)
  Output : -7

  Input  : 10  (3840 - 945)
  Output : 2895

*/

