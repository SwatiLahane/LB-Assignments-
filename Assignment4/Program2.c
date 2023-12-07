
//Peoblem Statement: Write a program Which accept number from user and display its factor in decresing order



#include<stdio.h>

 void FactRev(int iNo)
{
     register int iCnt = 0;
     
      
     for(iCnt = (iNo/2) ; iCnt <= (iNo/2); iCnt--)
     {

        if(iNo % iCnt == 0)
        {
            printf("%d " ,iCnt);
        }

     } 
    
}

int main()
{

    auto int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    FactRev(iValue); //Function call


    return 0;

}

