
//Problem statements :write a program which accept number from user and display its table

#include<stdio.h>

void TableRev(int iNo)
{
    auto int icnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }
   for(icnt =10; icnt >= 1; icnt--)
    {
       printf("%d ",icnt * iNo);
    }

}


int main()
{
    
    auto int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    TableRev(iValue);   //function call

    return 0;
}

//Step :Test Cases 
/*
Input : 2
Output :20 18 16 14 12 10 8 6 4 2

Input :5
Output 50 45 40 35 30 25 20 15 10 5

Input :-5
Output 50 45 40 35 30 25 20 15 10 5


*/