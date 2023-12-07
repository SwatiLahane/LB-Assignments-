//Problem Statement :write a program which accept radius of circle from user and Calculate its Area 
//Consider Value of PI as 3.14 (Area = PI * Radius * Radius)

/*
   Input  : 5.3
   Output :88.2026
 
   Input  :10.4
   Output :339.6224
*/


#include<stdio.h>

double CircleArea(float fRadius)
{
    auto float PI = 3.14f;
    auto float Area = 0;

    Area  = PI * fRadius * fRadius;

    return Area;
}


int main()
{
  auto float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter radius");
  scanf("%f",&fValue);

  dRet = CircleArea(fValue); //Function Call

  printf("ARea of Circle is %lf",dRet);
  return 0;


}