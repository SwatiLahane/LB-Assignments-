

/*
    Input N :  6
    Elements :85 66 3 66 93 88

    Output :  90(93-3)
*/
 
    //Accept N Numbers from user and return the difference between largest and smallest number

    #include<stdio.h>
    #include<stdlib.h>


    int Difference(int Arr[] ,int iLength)
    {
        register int iCnt = 0;
        int iMin = Arr[0];
        int iMax = Arr[0];
        int Diff = 0;
        
        for(iCnt = 0 ; iCnt < iLength; iCnt ++)

        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
            
            Diff = iMax - iMin;

        }
           return Diff;
    }
      /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //                      Entery Point Function from where execution get starts 
      ///
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int main()

    {
        int iSize = 0 ,iRet = 0;
        int *ptr = NULL;
        float fRet = 0.0f;
        int iCnt = 0;

        printf("Enter number of elements you want  to Enter :\n");
        scanf("%d",&iSize);

        ptr  = (int *) malloc(iSize * sizeof(int));
        printf("Dynamic memory gets allocated successfully for %d elements\n",iSize);

        printf("Enter %d elements : \n",iSize);
        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            printf("\nEnter element no %d :",iCnt+1);
            scanf("%d",&ptr[iCnt]);
        }

        iRet = Difference(ptr,iSize);
    printf("Difference between iMax and iMin is : %d \n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated successfully ...\n");
    
        return 0;

    }