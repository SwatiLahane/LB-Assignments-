

//Problem Statement :Write a program which accept number from user and return the count of Even digits
#include<stdio.h>


//Function to return Even count in Number 
int CountEven(int iNo)
{
    auto  int iDigit = 0;
    auto int iCount = 0;
    
    
      if(iNo < 0)  //Updator
    {
        iNo = -iNo;
    }
     //joparient iNo zero hot nai toparient loop phirnar 
    while(iNo > 0)   //Condition 
    {
        iDigit = iNo % 10;  //   
        
        if(iDigit % 2 == 0) //Logic to find Even Digit 

        {
          iCount++;  //To count Even digit ,initially count initialise by zero(int count = 0)

        }
        iNo = iNo / 10; 
    }
    return iCount;  //Function reutrn icount to caller function 
}

int main()
{
    auto int iValue = 0; //Variable to store Number 
    auto int iRet = 0; //Varial to store Result

    printf("Enter number :"); //To display on screen
    scanf("%d",&iValue);      

    iRet = CountEven(iValue);//Function call

    printf("%d" , iRet); //To print Even Count of Number 

    return 0; //Return zero to os 

}

//Test Steps
/*
  Input : 2395
  Output :1

  Input :1018
  Output: 2

  INput : -1018
  Output :2
 
  iNput : 8462
  Output:4

*/