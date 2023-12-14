
        //5. Accept N Numbers from user and accept one another number as NO, return index of first Occurrence of that NO
        /*Input  :N : 6
                  :NO : 66

        Element : 85 66 3 66 93 88 
        Output  : 1

        Input  :N  : 6
                No :  12
        Element : 85 11 3 15 11 111
        output  : -1
        */
        #include<stdio.h> // printf and scanf
        #include<stdlib.h>//For malloc and free

        int FirstOcc(int Arr[] ,int iLength,int iNo)
        {
            register int iCnt = 0; 
              auto int iCount = 0;
              int index = 0;
            for(iCnt = 0 ; iCnt < iLength ; iCnt++)
            { 
              
                if(Arr[iCnt] == iNo)
                {
                 return iCnt;  
                
                }
               
           }
            return -1;
            
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
        iRet = FirstOcc(p,iSize,iValue); //Function Call
        
        if(iRet == -1)
        {
            printf("-1\n");
        }
        else
        {
          printf("First Occurance of Number is %d \n",iRet); 
        }
        
        
        free(p);//
        printf("Dynamic memory gets deallocated sucessfully......\n");
            return 0;

        }