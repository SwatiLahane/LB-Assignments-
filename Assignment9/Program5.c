
//Problem Statement : Write a program which accept area in sqaure feet and convert it into square meter (1 squre feet = 0.0929 squre meter)
      //(1 meter square is 10.76391 ft square)

#include<stdio.h>

double SquareMeter(float fsqurefeet)
 
{ 
    //square meter = 
    double  Conversion = 0.0;
    Conversion  = (fsqurefeet  /10.75);
    return Conversion;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

   printf("Enter square feet:");
   scanf("%d",&iValue);

  dRet = SquareMeter(iValue);
  printf("conversion of square feet to Square meter is %lf ",dRet);
   


    return 0;

}
//Test Cases :
/*
Input :5
Outpu : 0.465116

Input :7
output :0.650321

*/