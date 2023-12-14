
        /*
        Input N: 6 
            Elements : 85 66 3 66 93 88

        Output :  TRUE  

        */

        //Problem Statement :Accept N Number from user and accept one another number as NO , check whether NO is Present or Not 

        #include<stdio.h> //For printf scanf function
        #include<stdlib.h>//For malloc free

        #define TRUE 1
        #define FALSE 0

        typedef int BOOL;
       
        BOOL Check(int Arr[] ,int iLength ,int iNo)
        {
            register int iCnt = 0;
            

            for(iCnt =0 ; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    return TRUE;
                }
                else
                {
                    return FALSE;
                }
                
            }
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

        
        printf("Enter Number of element :");
        scanf("%d",&iSize);

        printf("Enter the Number:");
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

            iRet = Check(p,iValue,iValue);
            
            if(iRet == TRUE)
            {
                printf("TRUE\n");

            }
            else
            {
                printf("FALSE\n");
            }
            
            free(p); //Deallocated dynamic memory
            printf("Dynamic memory gets deallocated successfully.......");
            return 0;
        }