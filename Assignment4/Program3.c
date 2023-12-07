

//Problem statement: write a program which accept number from user and display all its non factors.
//conclusiont accept one Number from user and display its non factors ex non factor of 12 ---- 5,7,8,9,10,11

//Underderstand the problem statement 

//Write a Algorithm
#include<stdio.h>

 void NonFactor(int iNo)
 { 
      register int iCnt = 0;

      if(iNo < 0)
       {
          
          iNo = -iNo;

      } 
      //       1           2        3
      for(iCnt = 1; iCnt <= iNo; iCnt++) //For loop
  
      {
          if(iNo % iCnt != 0 ) // 4
 
          {

           printf("%d ",iCnt);  

           }
         
      }

}
int main()
{
    auto int iValue = 0;  //Variable to store value

    printf("Enter a number\n"); //Print msg on console
    scanf("%d",&iValue);        

    NonFactor(iValue); //function call

   return 0;


}

//Step 5:

/* 
  Intput :12
  output :5 ,7,8,9,10,11

  Input :13
  Output :2 3 4 5 6 7 8 9 10 11 12 
  
  Input :10
  Output:3 4 6 7 8 9

*/