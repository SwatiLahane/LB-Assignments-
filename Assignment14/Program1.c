/*
Input N: 6
       Element : 85 66 3 80 93 88

Outpu : 3       
*/

//Problem Statement  :1.Accept N Number from user and return frequency of even Numbers
#include<stdio.h>
#include<stdlib.h>


//Function to Count Frequency of Even Numbers 
int CountEven(int Arr[],int iLength)
{
    register int iCnt = 0;
    auto int iCount = 0;
    
    for(iCnt = 0 ; iCnt < iLength; iCnt ++ )
    {
        if(Arr[iCnt] % 2 == 0)
        iCount++;
    }
    return iCount;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//           Entry Point function from where execution get starts 
//           
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iSize = 0;
   int iCnt = 0  , iRet = 0;
   int *p = NULL;

   printf("Enter The Number Of Element:");
   scanf("%d",&iSize);

   p = (int *) malloc(iSize * sizeof(int));
    
   printf("Dynamic memory gets Allocated successfully for :%d\n", iSize);
   
   printf("Enter %d Element\n");
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        printf("Enter Element %d:" ,iCnt + 1);
        scanf("%d",&p[iC nt]);
    } 
   
     iRet = CountEven(p,iSize);//Function call
     printf("Even Number Frequecny is :%d\n",iRet);

    free(p);
    printf("Dynamic memory gets deallocated successfully.....\n");
    return 0;
}