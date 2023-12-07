
#include<stdio.h>

void Display(int iNo1)
{ 

    auto int iCnt = 0; //Step 1 initialisation
    while(iNo1 > iCnt) //step 2 -Condition

    {
        printf("* "); // // step 4 loop body
        iNo1-- ;//           step 3 :Displacement 

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