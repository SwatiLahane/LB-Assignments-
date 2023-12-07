 

 //Prbolem statement :Accept N number from user and return difference between Summation of even elements and 
 //summation of Odd Element
/*Input :            6
         Elements : 85 66 3 80 93 88 
 
Output : 53 (234 -181)

Program Layout :
*/
 #include<stdio.h> //For Printf Sacnf
 #include<stdlib.h>//Malloc and free
 
 int Difference(int Arr[] , int iLength)
 {
      register int iCnt = 0;
      auto int Diff = 0;
      auto int iEven = 0 ;
      auto int iOdd = 0;
      
      for(iCnt = 0; iCnt < iLength; iCnt ++)
      {
          if(Arr[iCnt] % 2 == 0 )
          {
              iEven = iEven + Arr[iCnt];
          }
          if(Arr[iCnt] % 2 != 0)
          {
              iOdd = iOdd + Arr[iCnt];
          }

          Diff = iEven - iOdd;
      }
      
      return Diff;
 }


//Function to perfor Summation of Even and Odd Element And return Difference between even and odd Elements


/////////////////////////////////////////////////////////////////////////////////////////////////////
///
//       Entry point function From where execution get started
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
 int main()
 {
   int iSize = 0 ,iRet = 0, iCnt = 0; 
   int *P = NULL ;

    printf("Enter Number of elements:");
    scanf("%d",&iSize); 

     

      P = (int *)malloc(iSize * sizeof(int));  //malloc call dynamic memory allocation
      printf("Dynamic memory gets allocated successfully for %d elements\n",iSize);

    if(P == NULL)
    {
        printf("Unable to Allocate the Memory");
        return -1;
    }
    printf("Enter %d elements\n\n ",iSize);
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
         printf("\nEnter element %d :", iCnt+1);
         scanf("%d",&P[iCnt]);
    } 

    iRet = Difference(P,iSize); //FUnction Call    
    
    printf("\nResult is :%d\n",iRet);

    free(P);
    printf("Dynamic memory gets deallocated successfully.....\n");

     return 0; 
 }