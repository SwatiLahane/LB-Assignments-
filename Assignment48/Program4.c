#include<stdio.h>
//Write recursion program which display below pattern 
//Input : 6 
//Output : A  B  C  D  E  F 


void Display(int iNo)
{
    static char ch = 'A';
    static int iCnt = 1;

    if(iCnt <= iNo )
    {
      printf("%c\t",ch);
      ch++;
      iCnt++;
      Display(iNo);
    }
}


int main()
{   
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}