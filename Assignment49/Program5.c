
//Resursive program which accept number frm user and return its product of digits


//Recursive program which accept number from user and return summation of its digits.
//Input : 523
//Output : 30
#include<stdio.h>
int Multi(int iNo) 
{
       
         int iDigit = 0;
         static int Product = 1;  

        if(iNo != 0)
        {
           
            iDigit = iNo % 10;
            Product = Product * iDigit;
            iNo = iNo / 10;
            

            Multi(iNo); //Recursive call
                  
       }
        
return Product;
    
}

int main()
{
   
   int iValue = 0;
   int iRet = 0;
   printf("Enter Number :");
   scanf("%d",&iValue);

   iRet = Multi(iValue);
   printf("Addition of digits is : %d  ",iRet);

    return 0;
}