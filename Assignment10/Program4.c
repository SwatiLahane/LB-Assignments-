
//Write a program which accept range from user and return addition of all even numbers 
//in between that range.(Range should contains positive numbers only)



#include<stdio.h>


int RangeSumEven(int iStart ,int iEnd)
{
   register int iCnt = 0; 
   int iEvenSum = 0;
  
  if(iStart < 0)  //UpDATOR
  {
      printf("Invalid Range\n");
      return iEvenSum;
  }

  if(iStart > iEnd) //FILTER
  {
      printf("Invalid range\n");
  }

  for(iCnt = iStart; iCnt <=iEnd ; iCnt++)
  {
      if(iCnt % 2 == 0)
  {
      iEvenSum = iEvenSum + iCnt;

  }


  }
      return iEvenSum;
}


int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   int iRet  = 0;

   printf("Enter Staring point :");
   scanf("%d",&iValue1);

   printf("Enter Ending point :");
   scanf("%d",&iValue2);

   iRet = RangeSumEven(iValue1,iValue2); //Function call 

   printf("Addition of All even numbers %d",iRet);




    return 0;
}

//TEST CASES
/*
Input : 23 30
Output :108

Input : 10 18
Output : 70

Input : -10  2
Output :Invalid Range

Input : 90 18
Output :Invalid Range 



*/