
//Problem statements :write a program which accept number from user and display its table

#include<stdio.h>

void Table(int iNo)
{
    auto int icnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }
   for(icnt =1; icnt<= 10; icnt++)
   {
       printf("%d ",icnt * iNo);
   }

}


int main()
{
    
    auto int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Table(iValue);   //function call

    return 0;
}
//Test Cases
/*
Input : 2
Output :2 4 6 8 10 12 14 16 18

Input :5
Output 5 10 15 20 25 30 35 40 45 50

Input :-5
Output 5 10 15 20 25 30 35 40 45 50

*/