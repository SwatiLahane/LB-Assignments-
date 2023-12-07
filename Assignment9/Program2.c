
//Progblem Statemnet : Write a program which accept width & Height of rectangle from user and 
//Calculte its Area .(Area  = width * Height)

#include<stdio.h>

//Function to calculate area of Rectangle

double RectArea(float fWidth ,float fHeight)   //
{
   auto double Area = 0.0; //Variable to return result 

    Area = fWidth * fHeight;  //Logic
    return Area;
}


//////////////////////////////////////////////////////////////
//
///         Entry Point FUnction
///////////////////////////////////////////////////////////

int main()
{

   auto float iValue1 = 0.0f; //Variable to store ivalue1
   auto float iValue2 = 0.0f; //Variable to stor ivalue2

   auto double dRet = 0.0;
   printf("Enter Width Number:\n");
   scanf("%f" ,&iValue1);

   printf("Enter Height Number:\n");
   scanf("%f" ,&iValue2);

   dRet = RectArea(iValue1,iValue2);//Function call
  
   printf("Area of rectangle is %lf",dRet);

  return 0;

}

//STep Test Cases
/*
Input   :5.3 9.78
output  :51.834

Input   :3. 9.78
output  :34.229999





*/