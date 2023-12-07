
//Problem Statement to printf 5 times "Marvellous " on screen
//Conclusion :we have to print 5 time Marvellous on screen by using any Loop(for ,while ,do while) 

//Step 1:Understand the problem statement

//Step 2 :Algorithm 
// we create one variable AND STORE the value in it
//we use for loop ,while llop ,do while to print result
// to print the result we use conditional operator

//Step 3 : Decide the programming language here we are using c  

#include<stdio.h>
void Display()

{
      printf("Display function output By using For loop\n");
      auto int iNo = 0; //intitialization
      for(iNo = 1; iNo<=5; iNo++) //Step1 ,step 2,step 3 
      {
          printf("Marvellous\n"); //loop Body
      }

}

void Display1()
{
     printf("Display1 function output By using while loop\n");
     auto int iNo1 = 1; //step 1 -initialization
     while(iNo1<=5)  //Step 2 - condition
       {   
           printf("Marvellous\n"); //Step 4- loop body
           iNo1++; //step 3 - displacemenet 
           
       }

}

void Display2()
{
  printf("Display2 function output By using do - while loop\n");
   
   auto int iNo2 = 1;
   do
   {
       printf("Marvellous\n");
       iNo2++;
 
   }while(iNo2<=5);


}

int main()
{
     Display(); //Function call Display
     Display1(); //Function call for Display1
     Display2();

    return 0;
}
//step 5:test Case
/*
 ino = 1
 Marvellous 
 Marvellous 
 Marvellous 
 Marvellous
 Marvellous

 in case of iNo = -1
 Marvellous 
 Marvellous 
 Marvellous 
 Marvellous
 Marvellous

 
*./



