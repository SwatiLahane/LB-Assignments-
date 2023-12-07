
//Problem Statement :Write a program which Accept number from user and if number is less than 50 
//then print small ,if it is greater than 50  and less then print medium and if it is greater than 100 then print large


#include<stdio.h>



//Function to Display Numbers 
 void Number(int iNo)
 {
     if(iNo >0 && iNo < 50)
      {
          printf("Small");
      }
      else if(iNo > 50 && iNo < 100)
      {
          printf("Medium\n");
      }
    
    else if(iNo > 100)
    {
        printf("Large");
    }

 }
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//           Entry Point Function from where execution get started in case of c programming os will Call main function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;  // Variable to store iValue

    printf("Enter Number:");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;


}
//test Steps 
/*
Input :75
Output :Medium

Input :24
Output : Small

Input :101 
Output :Large 
*/