//Recursive program which accept number from user and return summation of its digits.
//Input : 879
//Output : 24
#include<stdio.h>
int Display(int iNo) 
{
       
         int iDigit = 0;
         static int iSum = 0;  

        if(iNo != 0)
        {
           
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
            

            Display(iNo); //Recursive call
            
            
            
       }
        
return iSum;
    
}

int main()
{
   
   int iValue = 0;
   int iRet = 0;
   printf("Enter Number :");
   scanf("%d",&iValue);

   iRet = Display(iValue);
   printf("Addition of digits is : %d  ",iRet);

    return 0;
}