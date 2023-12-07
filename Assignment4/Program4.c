
//4.Write a program which accepts number from user and return Summation of all its non factor


#include<stdio.h>

int SumNonFact(int iNo)

{
     register int iCnt = 0;
     auto int iSum = 0;
 
     if(iNo < 0)  //Updator
     {
          iNo = -iNo;
     }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)  ///Logic for Non Factor 
        {
            
             iSum = iSum + iCnt;   //Summation 
        }

    }
          

   return  iSum ;
}

int main()
{
    auto int iValue = 0;
    
    auto int iRet = 0;
     printf("Enter number:\n");
     scanf("%d",&iValue);

    iRet = SumNonFact(iValue);//Function call 
    
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