
#include<stdio.h>

//Write a recursive program which accept number from user and return its reverse number
//Input : 523
//Output : 325

int Reverse(int iNo)
{     
      int iRev = 0;
      int iDigit = 0;
      while(iNo != 0)
      {
          iDigit = iNo % 10;
          
          iNo = iNo / 10;
          
          iRev = (iRev * 10) + iDigit;
          
          Reverse(iNo); //Recursive
        
      }

     return iRev;
}

int main()
{

    int iValue = 0, iRet = 0 ;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Reverse(iValue); //Function call
    printf("Reverse Number : %d ",iRet);
    return 0;

}