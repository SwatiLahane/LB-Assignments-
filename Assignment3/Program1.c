
// Problem statement :Write a program which accept one number from user and print that number of Even Numbers


  //////////////////////////////////////////////////////////////////////
  // 
  //  Function Name          : PrintEven  
  //  Description            : It is used to Calculate Even Numbers 
  //  Input Argument         : Integer 
  //  Output Argument        : Integer
  //  Author                 : Swati Vinayak Lahane
  //  Date                   : 09/10/2023
  ///////////////////////////////////////////////////////////////////////
  #include<stdio.h>
   
   void PrintEven(int iNo)
   {
        register int iCnt = 0;
          
        if(iNo < 0) //Updator

        {
             iNo = -iNo;
        } 
         
       //      1        2               3
        for(iCnt = 1 ; iCnt <= 2*iNo ; iCnt++)   //LOop

         {
             if(iCnt % 2 == 0)

             {
                 printf("%d ",iCnt);    //loop Body 4
             }
         } 
        
   }




  int main()
  {
        auto int iValue = 0; //Variable to store values 

         printf("Enter Number \n");   //To Print message on screen
           scanf("%d",&iValue);        //Accept number from user 
      
         PrintEven(iValue);  //FUnction Call


    return 0;
  }


  //Time Complexity  : O(2*N)

  //Test Cases
/*
Input  : 7
Output : 2,4,6,8,10,12,14

Input  : 10
Output :2,4,6,8,10,12,14,18,20

Input  :-5
Output :2,4,6,8,10

*/