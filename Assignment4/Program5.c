

//Problem Statement :Write a program which Accept Number from user and return difference between 
//Summation of all its factors and non factors


//4.Write a program which accepts number from user and return Summation of all its non factor


#include<stdio.h>

int FactDiff(int iNo)

{
     //rewrite this code it is not generating proper Result

     register int iCnt = 0;
     auto int iSum = 0;
     auto int iSum1 = 0;
     auto int Result = 0;
 
     if(iNo < 0)  //Updator
     {
          iNo = -iNo;
     }

    for(iCnt = 1; iCnt <= (iNo) ; iCnt++)
    {
        if(iNo % iCnt == 0 )
        {
          iSum = iSum + iCnt;
        }
        if (iNo % iCnt !=0)  

        {
             iSum1 = iSum1 + iCnt;
        }
          Result = iSum -iSum1;
    } 

      return iSum - iSum1;  
}

int main()
{
    auto int iValue = 0;
    
    auto int iRet = 0;
     printf("Enter number:\n");
     scanf("%d",&iValue);

    iRet = FactDiff(iValue);//Function call 
    
    printf("%d ",iRet);
    
    return 0;

}
//Step 5 :Test Cases
/*
  Input : 
  Output: 

   Input :
   output :
   
   Input : 
   Output : 
*/ 