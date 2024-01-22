//2.write a recursive program which accept number form user and return largets digit
//Input ; 87983
//Output : 9

#include<stdio.h>
//Recursive function
int Max(int iNo)
{
     static int iMax = 0;
      int iDigit = 0;

    if(iNo != 0)
    {
       iDigit = iNo % 10;
       if(iDigit >= iMax)  
       {
           iMax = iDigit;
       }

       iNo = iNo / 10;
       Max(iNo);//recursive call

    }
    return iMax;

}

int main()
{
  
    int iValue = 0, iRet =0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Max Digit is : %d ",iRet);
 
    return 0;
}