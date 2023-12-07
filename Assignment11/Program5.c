

//Problem statement: Write a program which accept number from user and count frequency of such digits which are less than 6

#include<stdio.h>
 
 int Count(int iNo)

 {
   int iDigit = 0;
   int count =0 ;

  while(iNo > 0)
  {
    iDigit = iNo % 10;

    if(iDigit < 6  )
    {
        count++;
    }

    iNo = iNo / 10;
  }
   return count;
 }


int main()
{
   auto int iValue = 0;
   auto int iRet = 0;
   printf("Enter a Number :");
   scanf("%d",&iValue);

   iRet = Count(iValue); //function Call
   printf("Frequency of less than digid 6 : %d" ,iRet);

    return 0;
}

//Test Steps :
/*
 Input : 1018
 Output: 3

 Input : 9440
 Output: 3

 Input : 96672
 Output: 1
 
 Input :324
 Output:3

*/
 