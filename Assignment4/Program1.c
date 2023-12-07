

//write a program which accepts number from user and display its Mulltiplication of factors

#include<stdio.h>

int MultFactor(int iNo)
{

    register int iCnt = 0;
    auto int iMulti = 1;

    if(iNo < 0) //Updator
  {
      iNo = -iNo; //it converts -ve number to positive
  }

   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)

   {
       if(iNo % iCnt == 0) // to check factor

   {
   
      iMulti = iMulti * iCnt;   //Multiplication of factors

   }

       
   }

   return iMulti;
}


int main ()
{
   
   auto int ivalue = 0; //Variable to store value
   auto int iRet = 0; //Variable to store result
   
   printf("Enter number :\n");
   scanf("%d",&ivalue);

  iRet =  MultFactor(ivalue); //Function Call
  
  printf("%d",iRet); //To print result

  return 0;

}

//Step 5

/*Input 12 
output :144

Input 10 
Output 10

input :13
output :1 

*/