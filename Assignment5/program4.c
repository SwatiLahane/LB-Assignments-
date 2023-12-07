
//Problem Statement :write a program which accept three numbers and print its Multiplication


#include<stdio.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
   

    auto int result = 0;
        
    if(iNo1 == 0)
    {
          iNo1++;
    }
    if(iNo2 == 0 )
    {
        iNo2++;
    }

    if(iNo3 == 0 )
    {
     iNo3++;
    }

    result = iNo1 * iNo2 * iNo3 ;

    return result; 
}



int main()
{

    auto int  iValue1 = 0;
    auto int iValue2  = 0;
    auto int iValue3  = 0;
    auto int iRet = 0;
    
    printf("Enter three Numbers:\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

   iRet =   Multiply(iValue1,iValue2 ,iValue3); //Function Call
  
   printf("Multiplication is %d",iRet);

   return 0;

}
//Input :4 5 7
//Output :140
/*
  Input: 5 0 0
  Output : 5

  input 0 0 0
  Ouput : 0   zero is no commint bcz of if condition change conditions
*/