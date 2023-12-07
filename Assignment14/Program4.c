
        //4. Accept N Numbers from user and return frequency of 11 form it.
        /*Input  :N : 6
        Element : 85 66 3 15  93 88 
        
        Output :0

        Input  :N : 6
        Element : 85 11 3 15 11 111
        output  : 2
        */
        #include<stdio.h> // printf and scanf
        #include<stdlib.h>//For malloc and free

        int Frequency(int Arr[] ,int iLength)
        {
            register int iCnt = 0; 
                    int iCount = 0;
            for(iCnt = 0 ; iCnt < iLength ; iCnt++)
            { 

                if(Arr[iCnt] == 11)
                {
                iCount++;
                }
                
                
            }
            return iCount;
        }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Entry Point Function from where execution gets started
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int main()

        {

        register int iCnt = 0;
        auto int iSize = 0, iRet = 0;
        auto int *p = NULL;  

        
        
        printf("Enter Number of elements :\n");
        scanf("%d",&iSize);

        p = (int *) malloc(iSize * sizeof(int)); //malloc call

        printf("Dynamic memory gets allocated sucessfully for %d Elements\n",iSize); 

        if(p == NULL)
        {
            printf("Unable to allocate Memory ");
            return -1;
        }

        printf("Enter %d elements " ,iSize);

        for (iCnt =0; iCnt < iSize; iCnt++)
        {
            printf("\nEnter Element %d :",iCnt + 1 );
            scanf("%d", &p[iCnt]);
        }
        iRet = Frequency(p,iSize); //Function Call
        
        printf("Frequecy is : %d\n",iRet);
        
        free(p);// To free Dynamic Memory
        printf("Dynamic memory gets deallocated sucessfully......\n");
            return 0;

        }