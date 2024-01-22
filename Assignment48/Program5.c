#include<stdio.h>

//5. Write a recursive program which display below pattern 
//input : 6
//Output : a  b  c  d   e  f

void Display(int iNo)
{
    static char ch = 'a';
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