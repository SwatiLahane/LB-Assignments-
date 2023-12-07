

//PRoblem Statement :Write a program which accept Temperature in Fahrenheit and convert it into celsius 
//(1 celsius = (Fahrenheit - 32 ) * (5/9))


#include<stdio.h>

double FhtoCs(float fTemp)
{
     double celsius = 0.0;

     celsius =(fTemp - 32 ) * (5/9);
    
    return celsius;
}

int main()
{
   auto float fValue1 = 0.0f;
   auto double dRet   = 0.0; 

   printf("Enter temperature in Fahrenheit:");
   scanf("%f",&fValue1);
  
  dRet = FhtoCs(fValue1);  //Function Calll

 printf("Fahrenheit to Celsius  is %lf",dRet);

    return 0;
}
//Step :Test cases 
/*
  Input : 10
  output :

  Input :34
  Output :

  

*/
