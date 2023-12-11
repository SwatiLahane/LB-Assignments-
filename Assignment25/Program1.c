

//Problem Statement : write a program which displays ASCCI table.Table contains character symbol,Decimal,Hexadecimal and
// octal representation of every member from 0 to 255

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :DisplayAscii
//            Function Description   :Function to print star pattern ,which contains 4 rows and 4 colm 
//            Input Argument         :Integer 
//            Output Argument        :Integer,Character
//            Date                   :12 Nov 2023         
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayASCII()
{ 
    
 int iCnt = 0;
          printf("---------------------------------------------------------------\n");
          printf("--------------------ASCII Table---------------------------------\n");
          printf("----------------------------------------------------------------\n");

  for(iCnt = 0; iCnt <= 255; iCnt++)
  {
      printf("%c\t%d\t%x\t%o\n",iCnt,iCnt,iCnt,iCnt);
  }

  printf("--------------------------------------------------------------\n");
}
int main()
{
   DisplayASCII();



    return 0;
}