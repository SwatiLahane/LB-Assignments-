

//Write a recursive program which accept number and return smallest digit
#include<stdio.h>
//Need corruction
//Recursive function
int Min(int iNo)
{
      int iMin = 0;
      int iDigit = 0;

    if(iNo != 0)
    {
       iDigit = iNo % 10;
       if(iDigit <= iNo)  
       {
           iMin = iDigit;
       }

       iNo = iNo / 10;
       Min(iNo);//recursive call

    }
    return iMin;

}

int main()
{
  
    int iValue = 0, iRet =0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Min Digit is : %d ",iRet);
 
    return 0;
}