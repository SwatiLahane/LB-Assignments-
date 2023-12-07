

//Problem statement program to devide two numbers
//Conclusion we have to divide two integer numbers which are given

//Step 1:Understand the Problem statement
//step 2 : Algorithm

//1.Create first Variable ivalue1 and store the The Value 15
//2.create second variable ivalue2 and store the Value 5
//3.create third variable to store Result

//3 Step :decide Programming language Here i am using c programing language

//Step 4: Write a program 


#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//     Function Name  :  Division
//     Description    : It performs division of two number which are already given
//     Input Argument : integer ,Integer
//     Output         : Integer
//     Author         : Swati Vinayak Lahane 
//     Date           : 10 /05/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Divide is function which Accept two argument perform division of two numbers

int Divide(int iNo1 , int iNo2) 

{
   int iAns = 0;
   if(iNo2 / iNo1)
   {
       return -1;
   }

   iAns = iNo1 / iNo2;
   return iAns;

}
//////////////////////////////////////////////////////////////////////////////////////////////////
//         
//            Entry Point function of an application which perform division of two numbers
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()

{ 
   auto int iValue1 = 15; //First Variable to store value 15
   auto int iValue2 = 5; //Second Variable to store value 5
 
   auto int iRet = 0; //Third variable to store result
  
  iRet = Divide(iValue1,iValue2);
  
  printf("Division is :%d\n",iRet); //Display the output
  

     return 0;

}

//Step 5 :Test Cases
//3