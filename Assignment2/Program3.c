//Accept one number from user and if number is less than 10 then  print "Hello" otherwise print "Demo"


#include<stdio.h>

void Display(int iNo1)
{ 
        
    if(iNo1 < 0)
    {
       iNo1 = -iNo1;
    }
      if(iNo1 < 10)

      {
          printf("Hello\n");

      } 
      else
      {
         printf("Demo\n");

      }
     

}

int main()

{
   
   auto int iValue1 = 0; //Variable to store value

   printf("Enter Number:\n");
   scanf("%d",&iValue1);

   Display(iValue1);//Function call

return 0;


}

//Step 5 : 
/* 
Input : 5
output : Hello

input :11
Output :Demo

*/