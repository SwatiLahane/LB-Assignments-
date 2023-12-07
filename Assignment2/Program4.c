
//Problem Statement :Accept two numbers from user and display first number in second number of time

#include<stdio.h>

   void Display(int iNo ,int iFrequency)
   {
       auto int iNo1 = 0;

       if(iNo < 0) //Updator

        {
             iNo = -iNo;
        } 

        for(iNo1 = 0 ; iNo1 <= iNo ; iNo1++)

        {
            printf("%d ",iNo);
        }
          
      
}
    

int main()
{
    auto int iValue = 0;
    auto int iCount = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter Frequency \n");
    scanf("%d",&iCount);
    
     Display(iValue , iCount); //Function call

 

    return 0; 
}