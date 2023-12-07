
/*
Input N : 6 
   Elements 85 66 11 80 93 88
   
   Output :11 is Present 

 Input N : 6 
   Elements 85 66 3 80 93 88
   
   Output :11 is abresent 
     

   */

//Problem Statement : Accept N Numbber from user and check whether that number contains 11 in it or Not

#include<stdio.h>//For printf scanf
#include<stdbool.h> //Boolean
#include<stdlib.h>//For malloc and free


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
     for(iCnt = 0; iCnt < iLength; iCnt++)
    
    if(Arr[iCnt] == 11 )
    {
        return TRUE;
    }
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              ENtry Ppoint Function From where execution gets started
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{  
    int iSize = 0 ,iCnt = 0 ;
    BOOL bRet = FALSE;
    int *p = NULL;
    
   
    printf("Enter the number of elements :");
    scanf("%d",&iSize);

     p =  (int *) malloc(iSize * sizeof(int)); //Malloc functio call
    
    printf("Dynamic memory gets allocated for %d element \n",iSize);
    printf("Enter %d Element :\n",iSize);
      for(iCnt = 0; iCnt < iSize ; iCnt++)
      {   
          printf("Enter Element %d : ",iCnt + 1);
          scanf("%d",&p[iCnt]);
      }
       
       bRet = Check(p,iSize);
       if(bRet == TRUE)
       {
        printf("11 is present\n");
       }
       else
       {
           printf("11 is absent\n");
       }
      

       free(p);   //Deallocate the memeory 
       printf("Dynamic memory gets Deallocated successfully....");
    
    return 0;
}