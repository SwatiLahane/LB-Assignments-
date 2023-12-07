
//Accept N Numbers from user and return difference between frequency of even number and oddd numbers 
/* Input N:  7
   Elements :85 66 3 80 93 88 90

 Output :1 (4 -3)
*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[] ,int iLength)
{
   register int iCnt = 0;
      auto  int iEvenCount = 0 ;
      auto  int  iOddCount = 0  , Diff = 0;
      int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] % 2 == 0)
            {
               iEvenCount++;
            }   
         if(Arr[iCnt] % 2 != 0)
         {
          iOddCount++;
         }   
        
         Diff = iEvenCount - iOddCount ;
          
    }  
    return Diff ;   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                             Entry Point function from where execution get starts
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{  
    int iSize = 0 ,iCnt = 0 ,iRet = 0;
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
       
       iRet = Frequency(p,iSize);
       printf("difference bet Frequency of even and odd is :%d",iRet);

       free(p);  
       printf("Dynamic memory gets Deallocated successfully....");
    
    return 0;
}