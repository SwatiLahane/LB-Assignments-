
//4.Write a program which accepts number from user and return Summation of all its non factor


#include<stdio.h>

int SumFact(int iNo)

{
     register int iCnt = 0;
     auto int iSum = 0;
      auto int iSum1 = 0;
        int Result = 0;
 
     if(iNo < 0)  //Updator
     {
          iNo = -iNo;
     }

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)  ///Logic for Non Factor 
        {
           if(iNo % iCnt !=0)

             { 
             iSum = iSum + iCnt; 
             
             }
           iSum1 = iSum1 + iCnt;
           
        }
          Result = iSum - iSum1 ; 
   }

   return  Result;
}

int main()
{
    auto int iValue = 0;
    
    auto int iRet = 0;
     printf("Enter number:\n");
     scanf("%d",&iValue);

    iRet = SumFact(iValue);//Function call 
    
    printf("%d ",iRet);
    
    return 0;

}
//:Step 5 :Test Cases
/*
  Input : 12
  Output: 50

   Input :10
   output :37
   
   Input : 11
   Output : 54
*/ 