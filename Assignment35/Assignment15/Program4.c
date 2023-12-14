
        //4. Accept N Numbers from user and accept Range ,Display all elements from that range 
        /*Input  :N : 6
                  start : 66
                  end    : 90
        Element : 85 66 3 66 93 88 76
        
        Output  : 66 76 88 


        Input  :N  : 6
                No :  12
        Element : 85 11 3 15 11 111
        output  : 0
        */
        #include<stdio.h> // printf and scanf
        #include<stdlib.h>//For malloc and free

        void Range(int Arr[] ,int iLength,int iStart,int iEnd)

        {
            register int iCnt = 0; 
                    int iCount = 0;

            for(iCnt = 0 ; iCnt < iLength ; iCnt++)
             {  
                if((Arr[iCnt] >= iStart  && Arr[iCnt] <= iEnd))
                {
                    printf("%d\n",Arr[iCnt]);
                   
                }

                
               
             }
            
            
        
      }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                   
//              ENtry point function from where execution get starts
//              Date : Nov 1 2023 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int main()

        {

        register int iCnt = 0;
        auto int iSize = 0, iRet = 0,iValue1 = 0, iValue2 = 0 ;
        auto int *p = NULL;  

        
        
        printf("Enter Number of elements :\n");
        scanf("%d",&iSize);

        printf("Enter the Starting Point :\n");
        scanf("%d",&iValue1);

        printf("Enter the Ending Point :\n");
        scanf("%d",&iValue2);

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
         Range(p,iSize,iValue1,iValue2); //Function Call
        
       
        free(p);//
        printf("Dynamic memory gets deallocated sucessfully......\n");
            return 0;

        }