
//1.Accept N Numbers from user and return the largest number.

        /*
        Input N: 6 
            Elements : 85 66 3 66 93 88

        Output :  93

        */

        #include<stdio.h>   //For printf scanf function
        #include<stdlib.h> //For malloc free

        
       
        int Maximum(int Arr[] ,int iLength)
        {
            register int iCnt = 0  ;
            int iMax = Arr[0];
              
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
              if(Arr[iCnt] > iMax)
              {
                  iMax = Arr[iCnt];
              }
             
            
             }
            return iMax;
        } 

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //                         Entry Point function from where execution gets started
        // 
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       
        int main()

        {

        auto int iSize = 0 , iCnt = 0 ,iRet = 0;
        auto int iValue = 0;
        auto int *p = NULL;

        
        printf("Enter Number of elements :");
        scanf("%d",&iSize);

        printf("enter Nymber:");
        scanf("%d",&iValue);  
    
        p = (int *)malloc(iSize * sizeof(int));
        printf("Dynamic memory allocated successfully for %d elements\n",iSize);

        if(p==NULL)
        {
            printf("Unable to Allocate the memeory");
            return -1;
        }

        printf("ENter %d Elements\n",iSize);
        for(iCnt = 0; iCnt < iSize; iCnt ++)
        {
            printf("Enter elements %d :",iCnt + 1);
            scanf("%d",&p[iCnt]);
        }

            iRet = Maximum(p,iSize);  //Function call
            printf("\nLargest number is %d\n",iRet);

            free(p); //Deallocated dynamic memory
            printf("Dynamic memory gets deallocated successfully.......");
            return 0;
        }