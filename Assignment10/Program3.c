

//Problem statement :Write a program which accept range from user and return addition of all numbers in between range .
//s(Range should contains positive numbers only)


#include<stdio.h>




int RangeSum(int iStart , int iEnd)
{
        register int iCnt = 0;
        int iSum = 0;
 
     if(iStart < 0)        //Updator
    {
         
         printf("Invalid Range\n");
         return iSum;

    }

    if(iStart > iEnd)        //Filter
    {
        printf("Invalid Range\n");
         return iSum;
       //  return RangeSum;
    }
 

  for(iCnt= iStart; iCnt <= iEnd; iCnt++) //logic
   {     
      
       {
           iSum = iSum + iCnt;
           
       }
          
     
   }
         return iSum;
          
   }
  


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                Entry Point Function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{

      auto int iValue = 0;      //Variable to store ivalue
      auto int iValue1 = 0;     //Variable to store ivalue1
      auto int iRet = 0;

      printf("Enter Staring point :");  //TO Display msg on console
      scanf("%d",&iValue);            //TO accept input from keybord

      printf("Enter Ending point :");  //TO Display msg on console
      scanf("%d",&iValue1);             //TO accept input from keybord
 

       iRet = RangeSum(iValue,iValue1); //Function call
     
       printf("Addition is %d",iRet);
    return 0;

}

