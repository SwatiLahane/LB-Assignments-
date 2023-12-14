
        //5. Accept N Numbers from user and accept one another number as NO, return index of last Occurrence of that NO
        /*Input  :N : 6
                  :NO : 66

        Element : 85 66 3 66 93 88 
        Output  : 1

        Input  :N  : 6
                No :  943
        Element : 85 66 3 66 93 88
        output  : 4

        Input N  : 6
              No : 12

              Elements :85 11 3 15 11 111
              Output = -1;
              
        */
        #include<stdio.h> // printf and scanf
        #include<stdlib.h>//For malloc and free

        int LastOcc(int Arr[] ,int iLength,int iNo)
        {     
            int ipos = -1; 
            register int iCnt = 0; 
              auto int iCount = 1;
            for(iCnt = 0 ; iCnt < iLength ; iCnt++)
            { 

                if(Arr[iCnt] == iNo)
                {
                 ipos = iCount;   
                 
                }
                 iCount++;         
                   
            }
            return ipos;
            
        }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                   
//              ENtry point function from where execution get starts
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int main()

        {

        register int iCnt = 0;
        auto int iSize = 0, iRet = 0,iValue = 0;
        auto int *p = NULL;  

        
        
        printf("Enter Number of elements :\n");
        scanf("%d",&iSize);

        printf("Enter the Number :\n");
        scanf("%d",&iValue);

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
        iRet = LastOcc(p,iSize,iValue); //Function Call
        
        if(iRet == -1)
        {
            printf("-1\n");
        }
        else
        {
          printf("Last Occurance of Number is %d \n",iRet); 
        }
        
        
        free(p);//
        printf("Dynamic memory gets deallocated sucessfully......\n");
            return 0;

        }