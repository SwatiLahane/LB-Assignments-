
//Problem Statement :Write a program which accept two numbers and check whether number is equal or not


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Function Name    :           CheckEqual
//   Description      :           It is used to check number is Equal or not
//   Input Argument   :           Integer ,Integer 
//   Output Argument  :           Boolen
//   Author           :           Swati Vinayak Lahane 
//   Date             :           16 /10/ 2023     
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0



//Function to check number is  Equal or not
 BOOL CheckEqual(int iNo1 ,int iNo2)
 
 {
      if(iNo1 == iNo2)
      {
          return TRUE;
      }
      else
      {
          return FALSE;
      }
 }

 int main()           //Entry Point function
 {
    
    auto int iValue1 = 0;  //Variable to store ivalue1
    auto int iValue2 = 0;  //Variable to store iValue2
    auto  BOOL iRet = FALSE; //Variable to store result

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    iRet = CheckEqual(iValue1,iValue2); //Funcction call

     if(iRet == TRUE)

     {
         printf("Equal");
     }
     else
     {
       printf("Not Equal");
     }
   
     return 0;

 }

 //Test cases

 /*
 Input :10 10
 Output:Equal

 Input :10 12
 Output :Not Equal

 Input  :10 -10
 Output : Not Equal 

 */